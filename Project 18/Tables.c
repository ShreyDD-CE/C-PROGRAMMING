#include<stdio.h>
void main()
{
      int row;
      int col;
      int Result;
      printf("Enter The Size of Table Horizontally(Row)\t:");
      scanf("%d",&row);
      printf("\nEnter The Size of Table Vertically(Column)\t:");
      scanf("%d",&col);

      printf("\nMultiplication Table of (%d X %d)\n",row,col);
        for(int r=1;r<=row;r++)
        {
            for(int c=1;c<=col;c++)
            {
                Result=r*c;
                printf("%d\t",Result);
            }
            printf("\n");
        }
      printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");
}

