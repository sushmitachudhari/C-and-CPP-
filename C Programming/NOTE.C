#include<stdio.h>
#include<conio.h>
int main()
{
  int num ,n;
  //clrscr();
  printf("\n Enter a Number");
  scanf("%d",&num);
  n=num;
  if(num>=500){
  printf("\n 500 %d",num/500);  }
       num=num%500;

  if(num>=100)
  {  printf("\n 100 %d",num/100); }
  num=num%100;

  if(num>=50)
   { printf("\n 50 %d",num/50);}
   num=num%50;

  if(num>=20)
  { printf("\n20 %d",num/20);}
   num=num%20;

   if(num>=10)
   { printf("\n10 %d",num/10);}
   num=num%10;

   if(num>=5)
   { printf("\n 5 %d",num/5);}
   num=num%5;

   if(num>=2)
   { printf("\n 2 %d",num/2);}
   num=num%2;

   if(num>=1)
   { printf("\n 1 %d",num/1);}
    num=num%1;
 return 0;
  //getch();
}
