
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rem,sum=0,mul=1;
	printf("\n Enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		sum=sum+rem;
		mul=mul*rem;
		
	}
	printf("\n %d\n %d",sum,mul);
	if(sum==mul)
	{
		printf("\n Number is Spy Number");
	}
	else
	    printf("\n Number is not spy number");
	return 0;
	
}
