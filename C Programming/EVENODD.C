#include<stdio.h>
#include<conio.h>
void main()
{
 int no;
 clrscr();
 printf("\n Enter number it can positive or negative:");
 scanf("%d",&no);
 no>0?printf("\n No is Positive"):printf("\nNo is negative");
 getch();
}