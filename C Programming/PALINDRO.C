#include<stdio.h>
#include<conio.h>
void main()
{
 int no,rev,r1,r2,num;
 clrscr();
 printf("\n Enter a three digit number");
 scanf("\n %d",&no);
 num=no;
 r1=no%10;//3
 no=no/10;//12
 r2=no%10;//2
 no=no/10;//1
 rev=r1*100+r2*10+no*1;
 printf("\nNumber is %d ", num);
 printf("\nReverse Number is %d ",rev);
 num==rev?printf("\n Number is palindrome %d",rev):printf("\n Number is not palindrome %d",rev);

 getch();
 }
