#include<stdio.h>
int main()
{
	int num,rem,flag=0;
	printf("Enter a number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		if(rem==0)
		{
			flag=1;
		}
		num=num/10;
	}
	if(flag)
	{
		printf("\n Duck number");
	}
	else
	    printf("\n Not Duck");

}
