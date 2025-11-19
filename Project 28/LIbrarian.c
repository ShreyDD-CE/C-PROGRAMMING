#include <stdio.h>
#include <string.h>

union Book
{
    int accessionNumber;
    char title[100];
    char author[100];
    float price;
    int isIssued; // 1 = issued, 0 = available
};

int main()
{
    union Book book;

    // Input book details one at a time
    printf("Enter accession number: ");
    scanf("%d", &book.accessionNumber);
    printf("Accession Number: %d\n", book.accessionNumber);

    printf("\nEnter book title: ");
    scanf(" %[^\n]", book.title); // Read string with spaces
    printf("Title: %s\n", book.title);

    printf("\nEnter author name: ");
    scanf(" %[^\n]", book.author);
    printf("Author: %s\n", book.author);

    printf("\nEnter price: rupees");
    scanf("%f", &book.price);
    printf("Price: %.2f\n", book.price);

    printf("\nIs the book issued? (1 = Yes, 0 = No): ");
    scanf("%d", &book.isIssued);
    printf("Status: %s\n", book.isIssued ? "Issued" : "Available");


    printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");
    return 0;
}
