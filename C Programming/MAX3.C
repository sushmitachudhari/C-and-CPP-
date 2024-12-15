#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("\n Enter Three number");
 scanf("%d %d %d",&a,&b,&c);
 (a>b&&a>c)?printf("\n%d is max",a):(b>a&&b>c)?printf("\n%d ia max",b):printf("\n%d is max",c);
  getch();
}