#include<stdio.h>
#include<conio.h>
int main()
{
	int f,l,m=1,n,r,rev;
	printf("\n Enter a number");
	scanf("%d",&n);
	r=n;
	
	l=n%10;
	
	
	while(r>=10)
	{   r=r/10;
		//n=n/100;
		m=10*m;
	}
	f=r;
	rev=l*m+(n%m+l);
	printf("\n%d \t%d \t%d",f,l,rev);
	return 0;
}
