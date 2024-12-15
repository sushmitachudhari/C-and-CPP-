#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a;
	printf("\n Enter a number");
	scanf("%d",&n);
	a=1;
	while(n>=a)
	{
		if(n%a==0)
			printf("\n factors of  %d is %d ",n,a);
		else
		    printf("\n  %dis not Factors",a);	
		a++;
	}
	return 0;
}
