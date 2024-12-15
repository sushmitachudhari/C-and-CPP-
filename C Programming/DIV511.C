#include<stdio.h>
#include<conio.h>
void main()
{
 int num;
 clrscr();
 printf("\n Enter number");
 scanf("%d",&num);
  if(num%5==0 && num%11==0)
  {
   printf(" %d Number is divisibal by 5 and 11 ",num);
  }
  else
    printf("%d Number is not divisibal by 5 and 11",num);

  getch();
}