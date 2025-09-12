#include<stdio.h>
#define p printf
#define s scanf
void main()
{
    int pos=0,neg=0,eve=0,odd=0,i,NO[25];

    for(i=0;i<25;i++)
    {
        p("%d.Enter value :",i+1);
        s("%d",&NO[i]);
    }

    for(i=0;i<25;i++)
    {


           if(NO[i]>0)
        {
            pos++;
        }
        else if(NO[i]<0)
        {
            neg++;
        }



           if(NO[i]%2==0)
           {
               eve++;
           }
           else
           {
               odd++;
           }

    }p("\nThe number of positive entries \t:%d",pos);
     p("\nThe number of negative entries \t:%d",neg);
     p("\nThe number of even entries     \t:%d",eve);
     p("\nThe number of odd entries      \t:%d",odd);
}
