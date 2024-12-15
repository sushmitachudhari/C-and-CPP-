#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i;
  clrscr();
  printf("\n Enter a number");
  scanf("%d",&n);
  i=1;
  while(i<=n)
  {
    printf("\n%d",i);
    i++;
   }
   getch();
}