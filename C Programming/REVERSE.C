#include<stdio.h>
#include<conio.h>
int main()
{
 int n,r,r1,r2;
 
 printf("\n Enter three digit number");
 scanf("\n %d",&n);
 r=n%10;
 n=n/10;
 r1=n%10;
 n=n/10;
 r2=n%10;
 n=r*100+r1*10+r2*1;
 printf("\n reverse number is %d",n);
 return 0;
 //getch();
}
