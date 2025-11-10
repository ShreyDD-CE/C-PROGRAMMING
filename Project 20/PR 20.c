#include<stdio.h>
void main()

{
    int j,i,l,counter=0;
    int id[10]={1,2,3,4,5,6,7,8,9,10},ID[10];
    for(l=0;l<10;l++)
    {
    printf("Enter ID :");
    scanf("%d",&ID[l]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(ID[i]==id[j])
            {
                counter++;
            }
        }
    }
    if(counter==10)
    {
        printf("\n\nAll the values exist");
    }
    else
    {
        printf("\n\n%d values are missing",10-counter);
    }
    printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");
}

