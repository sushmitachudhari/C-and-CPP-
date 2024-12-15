#include<stdio.h>
#include<conio.h>
void main()
{
 int sp,cp;
 clrscr();
 printf("\n Enter Cost price and Saling price");
 scanf("%d %d",&cp,&sp);
 if(sp>cp)
  printf("\n PROFIT\t%d",sp-cp);
 else
  printf("\n LOSS\t%d",cp-sp);

 getch();
}