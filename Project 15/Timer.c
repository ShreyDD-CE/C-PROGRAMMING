#include<stdio.h>
void main()
{
    int t;
    printf("Enter time:");
    scanf("%d",&t);
    while(t-=1)
    {
        printf("\n\tTime left: %d",t);
        sleep(1);
    } printf("\n\n\tTimes up!!");
}
