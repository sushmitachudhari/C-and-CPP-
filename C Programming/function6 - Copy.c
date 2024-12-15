//Armstrong using function
#include<stdio.h>
int main()
{
	void armstrong(int);
	int num;
	printf("\nEnter a number");
	scanf("%d",&num);
	armstrong(num);
	return 0;
}
void armstrong(int num)
{
	int p=1,rem,i,sum=0,temp,count=0;
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		count++;
		num=num/10;
	}
	num=temp;
	while(num!=0)
	{
		rem=num%10;
		p=1;
		for(i=1;i<=count;i++)
		{
			p=p*rem;
		}
		sum=sum+p;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("\nNumber is Armstrong Number");
	}
	else{
		printf("\n Number is Not Armstrong number");
	}
}
