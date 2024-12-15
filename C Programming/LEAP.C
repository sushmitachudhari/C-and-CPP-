#include<stdio.h>
#include<conio.h>
int main()
{
 int year;
 //clrscr();
 printf("\n Enter a YEAR");
 scanf("%d",&year);
 if(((year%4==0 )&& (year%400==0)) || (year%100!=0))
 {    printf("\n %d is leap Year",year);   }
 else
  {   printf("\n %d is not Leap year",year); }
   return 0;
  //getch();
}
