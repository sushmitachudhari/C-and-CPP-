#include<stdio.h>
#include<conio.h>
void main()
{
 float PI=3.14,r,d,area,cf;
 clrscr();
 printf("\nEnter radius of circle :");
 scanf("%f",&r);
 area=PI*r*r;
 d=2*r;
 cf=2*PI*r;
 printf("\n Area of circle %f",area);
 printf("\n Diameter of circle %f",d);
 printf("\n circumference of circle %f",cf);
 getch();
 }