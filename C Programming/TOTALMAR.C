#include<stdio.h>
#include<conio.h>
void main()
{
 int m1,m2,m3,m4,m5,total,percentage;
 clrscr();
 printf("\n Enter Marks of Five subjects:");
 scanf("\n%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
 total=m1+m2+m3+m4+m5;
 printf("\nTotal of Five subjects is %d",total);
 percentage=(total*100)/500;
 printf("\n Percentage is %d",percentage);
 getch();
}