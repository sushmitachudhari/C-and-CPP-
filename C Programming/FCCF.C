#include<stdio.h>
#include<conio.h>
void main()
{
 float c=0,fah=0;
 clrscr();
 printf("\nEnter temperature in fahrenheit :");
 scanf("%f",&fah);
 c=(fah-32)*5/9;
 printf("\n Celsius is : %f",c);

  fah=(c*9/5)+32;
 printf("\n Fahrenheit is : %f",fah);


 getch();
}