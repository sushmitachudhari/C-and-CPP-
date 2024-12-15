#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sum=0;
	printf("\n Enter a number");
	scanf("%d",&n);
	i=1;
	
	while(i<=n)
	{
	  sum=sum+i;
		i++;
	}
	 printf("\n SUM of Natural Numbers %d",sum);
	
	return 0;
}
