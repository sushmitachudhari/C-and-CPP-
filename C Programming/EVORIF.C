#include<stdio.h>
#include<stdio.h>
void main()
{
 int num;
 clrscr();
 printf("\n Enter a number");
 scanf("%d",&num);
 if(num%2==0)
 {
  printf("\n%d Even",num);
 }
 else
  printf("\n%d Odd",num);

  getch();
}