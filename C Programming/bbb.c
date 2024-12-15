#include<stdio.h>
int main()
{
	int num,i,rem,flag=0;
	printf("Enter a number");
	scanf("%d",&num);
	i=2;
	while(i<num)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
		i++;
		
	}
	if(!flag)
	    printf("\n Prime number %d",flag);
	else
	    printf("\n Not prime");    
}
