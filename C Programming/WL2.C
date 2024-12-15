#include<stdio.h>
#include<conio.h>
int main()
{
 int n,i;
 //clrscr();
 printf("\n Enter a number");
 scanf("%d",&n);
 i=1;
 while(n>=i)
 {
  printf(" \n %d",n);
  --n;
  }
  return 0;//getch();
}
