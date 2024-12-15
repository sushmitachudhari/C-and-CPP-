#include<stdio.h>
int main()
{
	int f,i,num,sum=0,temp;
	printf("Enter a number");
	scanf("%d",&num);
	temp=num;
	i=1;
	f=num/2;
	while(i<=f)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(temp==sum)
	{
		printf("\nPerfect Number");
	}
	else
	    printf("\n Not perfect");
}
