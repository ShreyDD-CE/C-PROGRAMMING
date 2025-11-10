#include<stdio.h>
#define e else
#define f for
#define p printf
#define s scanf
void main()

{
    int i,j,n;
    int F[10];
    p("Enter the Number of entry:");
    s("%d",&n);

    f(i=0;i<n;i++)
    {
     p("\nEnter The prices for day %d:",i+1);
     s("%d",&F[i]);
    }
    int min=F[0];
    int max=0;
    int profit;
    f(j=1;j<n;j++)
    {
        if(F[j]<min)
        {
            min=F[j];
        }
        else
        {
            profit=F[j]-min;
            if(profit>max)
            {
                max=profit;
            }
        }
    }
    if(max>0)
    {
        p("\n\nThe max Profit achievable is: %d",max);
    }
    else
    {
        p("\n\nNo profit possible for the trend");
    }
    printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");



}




















































