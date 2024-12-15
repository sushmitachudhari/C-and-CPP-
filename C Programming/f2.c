#include<stdio.h>
#include<conio.h>
int main()
{
	int n ,f,sum=0,i,temp;
	printf("\n Enter a number");
	scanf("%d",&n);//6
	temp=n;
	i=1;
	f=n/2;//3
	while(i<=f)//3<=3
	{
		if(n%i==0)//6%3==0
		{
			sum=sum+i;//1+2+3
			printf("\n%d\t%d",sum,i);
		}
		i++;
	}
	if(sum==temp)
	printf("\n %d\n%d is perfect number",temp,sum);
	else
	 printf("\n Not Perfect");
	return 0; 
}
