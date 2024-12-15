#include<stdio.h>
#include<conio.h>
void main()
{
 int num, rem=0;
 clrscr();
 printf("\n Enter Four digit number");
 scanf("%d",&num);
 rem=num%10;  //4
 num=num/10;
 rem=rem+num%10;//4+3
 num=num/10;
 rem=rem+num%10;//4+3+2
 num=num/10;
 rem=rem+num%10;
 printf("\n Sum of digit is\t %d",rem);
 getch();
}