#include <stdio.h>
#include <stdlib.h>


void sortPrices(float *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                float temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Error: No items to sort.\n");
        return 1;
    }


    float *prices = (float *)malloc(n * sizeof(float));
    if (prices == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }


    printf("Enter prices:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Item %d: RUPEES", i + 1);
        scanf("%f", prices + i);
    }


    sortPrices(prices, n);


    printf("\nSorted Prices:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\n", *(prices + i));
    }

    free(prices);
    printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");
    return 0;
}
