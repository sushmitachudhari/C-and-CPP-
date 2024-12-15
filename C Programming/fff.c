#include<stdio.h>
int main()
{
	int num,rem,mul=1,sum=0;
	printf("\n Enter a number");
	scanf("%d",&num);
	mul=num*num;
	
	while(mul!=0)
	{
		rem=mul%10;
		mul=mul/10;
		sum=sum+rem;
	}
	if(sum==num)
	{
		printf("neon");
	}
	else
	    printf("Not Neon");
}
