#include<stdio.h>
#include<conio.h>
int main()
{
 int num=0;
  printf("\nEnter a number");
 scanf("&d",&num);
 (num%4==0) && ((num%400==0 ) || (num%100!=0))?printf(" year is leap year"):printf(" year is not leap year");

return 0;
}
