#include<stdio.h>
#include<conio.h>
int main()
{
 int atow,b;
 float balc;
 //clrscr();

 printf("\n Enter the Money value to Withdraw and Total Balance");
 scanf("%d %f",&atow,&balc);
  b=balc;
 atow<balc && atow%5==0 ?printf("\n %d %f\n %f",atow,balc,balc-atow-0.50):printf("\n%d %f\n%f",atow,balc,balc);
 return 0;
 //getch();
}
