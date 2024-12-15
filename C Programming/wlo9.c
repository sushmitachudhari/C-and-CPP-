#include<stdio.h>
#include<conio.h>
int main()
{
	 int n,f,l,sum=0;
	 printf("\nEnter a number");
	 scanf("%d",&n);
	 l=n%10;
	 while(n>=10)
	 {
	 	n=n/10;
	 }
	 f=n;
	 sum=l+f;
	 printf("\n Sum of First %d and Last %d is %d",f,l,sum);
	 return 0;
}
