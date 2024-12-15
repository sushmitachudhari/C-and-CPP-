#include<stdio.h>
#include<conio.h>
void main()
{
 int no,f,l,r;
 clrscr();
 printf("\nEnter 4 digit number");
 scanf("%d",&no);
 l=no%10;
 f=no/1000;
 printf("\n First no. %d\n Last no. %d",f,l);
 getch();
}