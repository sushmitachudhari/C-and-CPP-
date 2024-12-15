
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,n,no=0;
 clrscr();
 printf("Enter a Number");
 scanf("%d",&n);
 i=1;
 while(i<=10)
 {     no=n*i;
     printf("\n%d * %d = %d",n,i,no);
     i++;
  }
 getch();
}