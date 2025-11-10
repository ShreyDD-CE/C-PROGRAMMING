#include<stdio.h>
void main()
{
    int choice,cost=0;
    do
    {
        printf("\n1 Burger\t=150rs\t");
        printf("\n2 Pizza \t=200rs\t");
        printf("\n3 Pasta \t=120rs\t");
        printf("\n4 Sandwich\t=100rs\t");
        printf("\n5 French Fries\t=80rs\t");
        printf("\nEnter 6 to complete the order");

        printf("\n\n\n\nSelect the dish");
        scanf("%d",&choice);

        switch(choice){

    case 1:
           printf("You ordered Burger");
           cost+=150;
           break;
    case 2:
           printf("You ordered Pizza");
           cost+=200;
           break;
    case 3:
           printf("You ordered Pasta");
           cost+=120;
           break;
    case 4:
           printf("You ordered Sandwich");
           cost+=100;
           break;
    case 5:
           printf("You ordered French Fries");
           cost+=80;
           break;
    default:
            printf("enter a Valid order");}

    } while(choice!=6);
    printf("The Total order cost: %d",cost);
    printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");
}

