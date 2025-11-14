#include<stdio.h>

void main()

{
    float marks;
    char *System;
    printf("Enter your grades:");
    scanf("%f",&marks);

    System = (marks>=90)? "You Scored A !":(marks>=80 && marks<90)?" You Scored B !":(marks>=70 && marks<80)?"You Scored C !":(marks>=60 && marks<70)?"You Scored D !":(marks<60)?"You Scored F !":"Failed the exams";

    printf("Results :%s\n",System);

    printf("\n\n\nThis Program was Developed By Shrey Dharmesh Dhameliya_25CE024_");
}

