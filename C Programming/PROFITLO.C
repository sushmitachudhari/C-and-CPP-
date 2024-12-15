#include<stdio.h>
#include<conio.h>
void main()
{
 int cp, sp;
  clrscr();
  printf("\n Enter Cost price and Selling price");
  scanf("\n %d %d ",&cp,&sp);
  sp>=cp?printf("\n PROFIT %d",sp-cp):printf("\n LOSS %d",cp-sp);
  getch();
}