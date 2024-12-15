#include<stdio.h>
#include<conio.h>
void main()
{
 int score,xx;
  score=750;
  clrscr();
  printf("\n Enter the credit score to acces CRED programs");
  scanf("%d",&xx);
  xx>score?printf("\n %d\t YES",xx):printf("\n %d\t NO",xx);
  getch();
}
