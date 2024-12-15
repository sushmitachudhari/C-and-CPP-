//1 to n Duck number
#include<stdio.h>
int main()
{
	void nDuck(int);
	int limit;
	printf("\nEnter Limit");
	scanf("%d",&limit);
	nDuck(limit);
	return 0;
}
void nDuck(int lmt)
{
	int i,j,rem,flag=0 ,temp;
	for(i=1;i<lmt;i++)
	{ temp=i;//10
			while(temp!=0)
			{
				rem=temp%10;
				
				if(rem==0)
				{
				printf("\n%d",i);
				}
				temp=temp/10;
			}
		    	
	}
}
