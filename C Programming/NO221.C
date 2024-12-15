
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,n,no=1;
 clrscr();
 printf("Enter a Number");
 scanf("%d",&n);
 i=1;
 while(i<=n)
 {     no=no*i;
     printf("\n%d ",no);
     i++;
  }
 getch();
}