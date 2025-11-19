#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of months: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid number of months.\n");
        return 1;
    }

    long long savings[n];
    savings[0] = 1;
    if (n > 1) savings[1] = 1;


    for (i = 2; i < n; i++) {
        savings[i] = savings[i - 1] + savings[i - 2];
    }


    printf("Savings over %d months:\n", n);
    for (i = 0; i < n; i++) {
        printf("Month %d : Rupees %lld \n", i + 1, savings[i]);
    }
     printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");
    return 0;
}
