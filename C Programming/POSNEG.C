#include<stdio.h>
#include<conio.h>
void main()
{
 int no;
 clrscr();
 printf("\nEnter a number");
 scanf("\n%d",&no);
 no>0?printf("\n Number is positive"):no==0?printf("\n Number is Zero "):printf("\n Number is Negative");

 getch();
}