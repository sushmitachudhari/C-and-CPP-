//function for n number perfect number 
//sum of factors
#include<stdio.h>
int main()
{
	void nperfect(int);//declaration
	int limit;
	printf("\n Enter a limit");
	scanf("%d",&limit);
	nperfect(limit);//calling
	return 0;
}
void nperfect(limit)//defination
{
	int i,j,rem,sum=0,temp;
	for(i=1;i<limit;i++)//1//2
	{   sum=0;
		for(j=1;j<i;j++)//1
		{
			if(i%j==0)
			{
				sum=sum+j;//1
			}
		}
		if(i==sum)
		{printf("\n %d ",i);
		}
	}
}
