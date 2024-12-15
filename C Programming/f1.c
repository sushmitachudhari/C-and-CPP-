#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num ,rem,flag=0;
	printf("\n Enter a number");
	scanf("%d",&num);
	i=2;	
	while(i<num)
	{
		if(num%i==0 )
		{
		 	flag=1;break;
		}
		//printf("\t %d",num);
		i++;
	}
		if(!flag)
		{
			printf("\n Number is prime");
		}
		else
		   printf("\n Not prime");
	
	return 0;
}
