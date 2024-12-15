#include<stdio.h>
#include<conio.h>
void main()
{
  int num,rev=0,rev1=0,rev2;
  clrscr();
  printf("\n Enter three digit number");
  scanf("%d",&num);
  rev=num%10;            //3
  num=num/10;            //12
  rev1=num%10;           //2
  num=num/10;
  rev2=num%10;
   num=(rev*100)+(rev1*10)+(rev2*1);

  printf("\n Reverse number is %d",num);
  getch();

}
