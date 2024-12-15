#include<stdio.h>
#include<conio.h>
void main()
{
  int no;
  clrscr();
  printf("\nEnter a number");
  scanf("\n%d",&no);
  (no%5==0)&&(no%11==0)?printf("\n  Number is divisible by 5 and 11"):printf("\n Number is not divisible by 5 and 11");
  getch();
}