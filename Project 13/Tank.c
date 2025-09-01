#include<stdio.h>
void main()

{
    int Capacity=0;
    for(Capacity;Capacity<=100;Capacity=Capacity+10)
    {
        printf("\nCurrent Water level: %d",Capacity);
        sleep(1);
    }printf("\n\n\nThe Tank Is Filled!!!");
}
