#include<stdio.h>
#include<conio.h>
void main()
{
 int a1,a2,a3;
 clrscr();
 printf("Enter the three angles of tringles");
 scanf("%d %d %d",&a1,&a2,&a3);
 if((a1+a2+a3)==180)
 {
  printf("Valid");
 }
 else
  printf("Invalid");

 getch();
}