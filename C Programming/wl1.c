#include<stdio.h>
#include<conio.h>
int main()
{
	int i,r,n,sum=0;
	printf("\n Enter a number");
	scanf("%d",&n);
	i=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		i++;
		n=n/10;
	}
	printf("\n Sum of digits in number %d",sum);
	return 0;
}
