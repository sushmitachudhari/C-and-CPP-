#include<stdio.h>
#include<conio.h>
void main()
{
 int cab1,cab2;
 clrscr();
 printf("\n Enter charges of cab1 and cab2:");
 scanf("%d %d ",&cab1,&cab2);
 cab1<cab2?printf("\nFIRST"):cab1==cab2?printf("\nANY"):printf("\nSECOND");
 getch();
}