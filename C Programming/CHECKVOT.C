#include<stdio.h>
#include<conio.h>
void main()
{
  int age;
  clrscr();
  printf("\n Enter Your age to check You are eligible for vote or not");
  scanf("\n%d",&age);
  age>=18?printf("\n  congrats!! You are Eligible"):printf("\n You are not Eligible");
  getch();
}