#include<stdio.h>
void main()

{
    int Books;

    for(Books=1;Books<=50;Books++)
    {
        if(Books%5==0)
        {
            printf("\nBOOK ID:%d(Special Edition)",Books);
        }
        else
        {
            printf("\nBOOK ID:%d",Books);
        }

    }
    printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");
}

