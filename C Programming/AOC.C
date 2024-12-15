#include<stdio.h>
#include<conio.h>
void main()
{
 float PI=3.14,r,a;
 clrscr();
 printf("Enter radius of circle \n");
 scanf("%f",&r);
 a=PI*r*r;
 printf("Area of circle is %f ",a );
 getch();
}