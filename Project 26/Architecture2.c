#include<stdio.h>
#include<math.h>
#define p printf
#define s scanf

double Area(double a,double b,double c)
 {

   double S=(a+b+c)/2;
   return sqrt(S*(S-a)*(S-b)*(S-c));

 }

 void Validation(double x,double y,double z)
 {
    int Validation_formulae=x + y;
    int Validation_formulae2=x + z;
    int Validation_formulae3=y + z;



    if(Validation_formulae>z && Validation_formulae2>y && Validation_formulae3>x)
    {
       p("The Triangle is Valid");
       double area=Area(x,y,z);
       p("\n\nThe area of The Tringle is %lf :",area);
    }
    else {
        p("\n\nThe Tringle is not Valid");
    }
 }

  void main()
  {
      double a,b,c;
      p("Enter The First Side:");
      s("%lf",&a);
      p("Enter The Second Side:");
      s("%lf",&b);
      p("Enter The Third Side:");
      s("%lf",&c);
      Validation(a,b,c);
  }
