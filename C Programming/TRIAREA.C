#include<stdio.h>
#include<conio.h>
void main()
{
 float b,h,area=0;
 clrscr();
 printf("\n Enter Base and height of tringle");
 scanf("\n%f %f",&b,&h);
 area=0.5*b*h;
 printf("\n Area of Tringle is: %f",area);
 getch();
}