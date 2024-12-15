#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("\n Enter two numbers");
  scanf("%d %d",&a,&b);
  a==b?printf("\n %d %d are Equals",a,b):printf("\n %d %d are not equals",a,b);
  getch();
}
