#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,sumofangle=180;
 clrscr();
 printf("\n Enter two angles of triangle: ");
 scanf("\n %d %d",&a,&b);
  c=sumofangle-(a+b);
  printf("\n Third angle of Tringle is %d:",c);
  getch();
 }