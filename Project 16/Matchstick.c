#include<stdio.h>
void main()

{
    int M=21,C,U;

    while(M>1)
    {
        printf("\nTotal sticks remaining:%d",M);
        printf("\nChoose sticks:");
        scanf("%d",&U);
        if(U>=5)
        {
            printf("\nEnter a value lesser than 5 as per rules of Game");
            continue;
        }
        C=5-U;
        printf("Computer's Choice:%d",C);
        M=M-(C+U);
        printf("\n\n");
        if(M==1)
        {
            printf("Computer Won The Game!!!");
        }
    }
}
