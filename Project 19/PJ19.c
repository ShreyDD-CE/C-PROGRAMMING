#include<stdio.h>
#define p printf
#define s scanf
void main()
{
    int i,j,n;
    p("Enter the Base/Height of the Triangle:");
    s("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if ((j)%2==0)
            {
                p("0\t");
            }
            else
            {
                p("1\t");
            }
        }p("\n");
    }
}
