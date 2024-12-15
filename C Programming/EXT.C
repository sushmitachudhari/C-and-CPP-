#include<stdio.h>
#include<conio.h>
void main()
{
  int num=0;
  clrscr();
  printf("Enter a four digit number\t");
  scanf("%d",&num);
  num=num%10;
  printf(" Number is %d",num);
  getch();
 }
