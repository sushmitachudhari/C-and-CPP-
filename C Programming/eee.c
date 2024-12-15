#include<stdio.h>
int main()
{
	int rem,i,temp,num,f,sum=0;
	printf("\nEnter a Number");
	scanf("%d",&num);
	
	temp=num;
	while(num!=0)
	{    f=1;
	     i=1;
		rem=num%10;
		while(i<=rem)
		{
			f=f*i;
			i++;
		}
		sum=sum+f;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("\nstrong number");
	}
	else
	    printf("\n not strong");
}
