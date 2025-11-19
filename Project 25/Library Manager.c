#include <stdio.h>

int main() {
    int choice, daysIssued;
    int allowedDays = 7; // Max allowed days to keep a book
    char bookName[4][30] = {
        "The Alchemist",
        "1984",
        "To Kill a Mockingbird",
        "The Great Gatsby"
    };

    printf("Welcome to the Library Manager\n");
    printf("Available Books:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, bookName[i]);
    }

    printf("Enter the number of the book you want to issue (1-4): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4) {
        printf("Invalid book selection.\n");
        return 1;
    }

    printf("You chose: %s\n", bookName[choice - 1]);

    printf("Enter how many days you have kept the book: ");
    scanf("%d", &daysIssued);

    if (daysIssued > allowedDays) {
        printf("You have exceeded the allowed return period.\n");
        printf("Penalty: 40rupees\n");
    } else {
        printf("No penalty. You must return the book within %d more day(s).\n", allowedDays - daysIssued);
    }
     printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");

    return 0;
}
