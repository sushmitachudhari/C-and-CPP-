#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,r,product=1;
	printf("\n Enter a number");
	scanf("%d",&n);
	i=0;
	while(n!=0)
	{
		r=n%10;
		product=product*r;
		i++;
		n=n/10;
	}
	printf("\n Product of digits %d",product);
	return 0;
}
