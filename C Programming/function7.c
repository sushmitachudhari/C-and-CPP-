//1 to n prime number
#include<stdio.h>
int main()
{
	void primeno(int);
	int limit;
	printf("\nEnter a limit");
	scanf("%d",&limit);
	primeno(limit);
	return 0;	 
}
void primeno(int lmt)
{
	int i,j,count=0,flag=0;
	for(i=2;i<=lmt;i++)
	{count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("\n %d",i);
		}
	}
}
