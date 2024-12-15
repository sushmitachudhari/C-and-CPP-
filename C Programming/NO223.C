
#include<stdio.h>
#include<conio.h>
int main()
{
 int b,i;
 clrscr();
 printf("Enter 2 Number");
 scanf("%d %d",&b,&i);
 i=1;
 while(i>0)
 {     b=b*i;
     printf("\n %d",b);
     i++;
  }
 getch();
}