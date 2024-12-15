#include<stdio.h>
#include<conio.h>
void main()
{
 int num;
 clrscr();
 printf("Enter four digit number ;");
 scanf("%d",&num);
 num=num/10;
 printf("Number is %d",num);
 getch();
}