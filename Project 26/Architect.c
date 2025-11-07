#include<stdio.h>
#include<math.h>
#define p printf
#define s scanf
void main()

{
    int a,b,c,Validation_formulae,Validation_formulae2,Validation_formulae3;
    float S,A;
    p("Enter the length of the first side:");
    s("%d",&a);
    p("Enter the length of the second side:");
    s("%d",&b);
    p("Enter the length of the third side:");
    s("%d",&c);

    Validation_formulae=a + b;
    Validation_formulae2=a + c;
    Validation_formulae3=b + c;



    if(Validation_formulae>c && Validation_formulae2>b && Validation_formulae3>a)
    {
      S=(a+b+c)/2;
      p("It Is A Valid Tringle");
      A=sqrt(S*(S-a)*(S-b)*(S-c));
      p("\n\nThe area of the garden is :%f",A);

    }

}
