#include<stdio.h>

void main()
{
    float Bank_Balance=5000;
    float Withdrawal_amount;

    do
    {
        printf("\nEnter The Withrawal amount:");
        scanf("%f",&Withdrawal_amount);

        if (Withdrawal_amount > Bank_Balance)
            {
            printf("Insufficient balance! You have only %.2f\n", Bank_Balance);
            break;
        }
        else
            {
            Bank_Balance -= Withdrawal_amount;
            printf("The Current bank balance is: %.2f\n\n", Bank_Balance);
        }

        printf("\n\n");

    }while( Bank_Balance>0);

    printf("The Bank Balance is insufficient For The Entered amount");
    printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");
}

