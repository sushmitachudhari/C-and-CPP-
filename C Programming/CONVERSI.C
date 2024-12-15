#include<stdio.h>
#include<conio.h>
int main()
{
 float cm,m,km;
 
 printf("\nEnter length in centimeter");
 scanf("\n %f",&cm);
 m=cm*100;
 printf("\n conversion of cm into meter is %fm",m);
 km=cm*100000;
 printf("\n conversion of cm into kilometer is %fkm",km);
 
}
