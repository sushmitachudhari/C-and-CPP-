#include<stdio.h>
#include<conio.h>
int main()
{
  int days,weeks,months,year;
  //clrscr();
  printf("\n Enter Days");
  scanf(" %d",&days);
  year=days/365;
  months=(days-year*365)/30;
  weeks=(days-year*365+months*30)/7;
  days=days-year*365+months*30+weeks*7;
  printf("\n Year %d",year);
  printf("\n Months %d",months);
  printf("\n Weeks %d",weeks);
  printf("\n Days %d",days);
  return 0;//getch();
}
