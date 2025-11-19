#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *summary;
    int initialSize = 100, newSize;

    // Step 1: Allocate initial memory using calloc
    summary = (char *)calloc(initialSize, sizeof(char));
    if (summary == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Step 2: Input initial summary
    printf("Enter initial article summary (max %d chars):\n", initialSize - 1);
    fgets(summary, initialSize, stdin);

    // Step 3: Expand memory using realloc
    printf("\nEnter new size for expanded summary: ");
    scanf("%d", &newSize);
    getchar(); // consume newline

    summary = (char *)realloc(summary, newSize * sizeof(char));
    if (summary == NULL)
    {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Step 4: Input expanded summary
    printf("Enter expanded article summary (max %d chars):\n", newSize - 1);
    fgets(summary, newSize, stdin);

    // Display updated summary
    printf("\nUpdated Summary:\n%s\n", summary);

    free(summary); // Clean up
    printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");
    return 0;
}
