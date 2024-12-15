#include<stdio.h>
#include<conio.h>
void main()
{
  int a=4,c, b;
  clrscr();
  b=++a;
  c=a++| a--& b++;
    printf("%d %d %d  ",c,a,b);
    getch();
}