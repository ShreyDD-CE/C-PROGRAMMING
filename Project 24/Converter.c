#include <stdio.h>

int main() {
    char note1[200], note2[200], result[400];
    int choice;

    printf("Enter your note: ");
    fgets(note1, sizeof(note1), stdin);

    do {
        printf("\n--- Note Operations ---\n");
        printf("1. Calculate Length\n");
        printf("2. Reverse Note\n");
        printf("3. Compare with Another Note\n");
        printf("4. Copy Note\n");
        printf("5. Concatenate with Another Note\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Capitalize Each Word\n");
        printf("9. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1) {
            int length = 0;
            while (note1[length] != '\0') {
                length++;
            }
            printf("Length: %d\n", length);
        }

        else if (choice == 2) {
            int length = 0;
            while (note1[length] != '\0') {
                length++;
            }
            printf("Reversed Note: ");
            for (int i = length - 1; i >= 0; i--) {
                putchar(note1[i]);
            }
            putchar('\n');
        }

        else if (choice == 3) {
            printf("Enter another note to compare: ");
            fgets(note2, sizeof(note2), stdin);
            int i = 0, same = 1;
            while (note1[i] != '\0' && note2[i] != '\0') {
                if (note1[i] != note2[i]) {
                    same = 0;
                    break;
                }
                i++;
            }
            if (note1[i] != note2[i]) same = 0;
            if (same)
                printf("Notes are identical.\n");
            else
                printf("Notes are different.\n");
        }

        else if (choice == 4) {
            int i = 0;
            while (note1[i] != '\0') {
                result[i] = note1[i];
                i++;
            }
            result[i] = '\0';
            printf("Copied Note: %s", result);
        }

        else if (choice == 5) {
            printf("Enter another note to concatenate: ");
            fgets(note2, sizeof(note2), stdin);
            int i = 0, j = 0;
            while (note1[i] != '\0') {
                result[i] = note1[i];
                i++;
            }
            while (note2[j] != '\0') {
                result[i] = note2[j];
                i++;
                j++;
            }
            result[i] = '\0';
            printf("Concatenated Note: %s", result);
        }

        else if (choice == 6) {
            int i = 0;
            while (note1[i] != '\0') {
                if (note1[i] >= 'a' && note1[i] <= 'z') {
                    note1[i] = note1[i] - 32;
                }
                i++;
            }
            printf("Uppercase Note: %s", note1);
        }

        else if (choice == 7) {
            int i = 0;
            while (note1[i] != '\0') {
                if (note1[i] >= 'A' && note1[i] <= 'Z') {
                    note1[i] = note1[i] + 32;
                }
                i++;
            }
            printf("Lowercase Note: %s", note1);
        }

        else if (choice == 8) {
            int i = 0, newWord = 1;
            while (note1[i] != '\0') {
                if (note1[i] == ' ') {
                    newWord = 1;
                } else if (newWord && note1[i] >= 'a' && note1[i] <= 'z') {
                    note1[i] = note1[i] - 32;
                    newWord = 0;
                } else {
                    newWord = 0;
                }
                i++;
            }
            printf("Capitalized Note: %s", note1);
        }

        else if (choice == 9) {
            printf("Exiting...\n");
        }

        else {
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 9);
     printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");

    return 0;
}
