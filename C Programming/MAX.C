#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("\n Enter two number");
 scanf("%d %d",&a,&b);
 a>b?printf("\n  is greater %d",a):printf("\n is smaller %d",b);
 getch();
}