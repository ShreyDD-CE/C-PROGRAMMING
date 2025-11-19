#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    FILE *fp = fopen("Demo.txt", "r");
    if (!fp) {
        printf("Error: Could not open Demo.txt\n");
        return 1;
    }

    char ch, word[100];
    int i = 0;

    printf("Reversed words:\n");

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch)) {
            if (i > 0) {
                word[i] = '\0';
                reverseWord(word, word + i - 1);
                printf("%s", word);
                i = 0;
            }
            putchar(ch); // preserve space or newline
        } else {
            word[i++] = ch;
        }
    }

    // Handle last word if file doesn't end with space
    if (i > 0) {
        word[i] = '\0';
        printf("%s", word);
        reverseWord(word, word + i - 1);
    }

    fclose(fp);
    printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");
    return 0;
}
