#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,sum=0;
 clrscr();
 printf("\n Enter Three angles of tringle:");
 scanf("%d %d %d",&a,&b,&c);
 sum=a+b+c;
 sum==180?printf("\n Tringle is valid"):printf("\nTringle is not valid");
 getch();
}