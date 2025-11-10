#include<stdio.h>

void main()
{
    float shopping_exp;
    float Discounted_amount;
    printf("Enter the your shopping expenditure:");
    scanf("%f",&shopping_exp);

    if(shopping_exp<1000)
    {
        printf("\nNo Discount available in this range");
    }
    else if(shopping_exp>=1000 && shopping_exp<=5000)
    {
        Discounted_amount=shopping_exp-(shopping_exp/10);
        printf("\nYou got a 10 percent discount an Your Final Amount is %.2f",Discounted_amount);
    }
    else if(shopping_exp>5000)
    {
        Discounted_amount=shopping_exp-(shopping_exp/5);
        printf("\nYou got a 20 percent discount an Your Final Amount is %.2f",Discounted_amount);

    }
     printf("\n\n\nThis Program was developed by Shrey Dharmesh Dhameliya_25CE024_ ");
}
