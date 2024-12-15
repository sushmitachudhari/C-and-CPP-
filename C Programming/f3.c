#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,flag=0;
	printf("\n Enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r==0)
		{
			flag=1;
		}
		n=n/10;
		
	}
	if(flag)
	{
		printf("\n Number is duck");
	}
	else
	   printf("\n Number is not duck");
	   
	return 0;   
}
