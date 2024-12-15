#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("\n Enter a number");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2!=0)
		{
			sum=sum+i;
		}
		i++;
	}
	printf("\n Sum of Odd Numbers %d",sum);
	return 0;
}
