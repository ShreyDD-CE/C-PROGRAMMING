#include<stdio.h>
void main()

{
    int t=0;
    float d=0;

 while(t<=20)
 {
     printf("\n Minute %d\t: The Distance Covered: %0.1f\t",t,d);
     sleep(1);
     d=d+0.5;
     t+=1;


 } printf("\n\n\aThe Marathon Has Completed !!!");
}
