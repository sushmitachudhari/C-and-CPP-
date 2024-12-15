#include<stdio.h>
#include<conio.h>
void main()
{
 int a,sum,r=0;
 clrscr();
 printf("\nEnter 4 digit number:");
 scanf("%d",&a);
 r=a%10;//4
 a=a/10;  //123
 r=r+a%10;//4+3
 a=a/10; //12
 r=r+a%10; //4+3+2
 a=a/10;
 r=r+a;

 printf("\n Sum of digit is %d",r);
 getch();
}