//Array using pointer
#include<stdio.h>
int main()
{
	int a[5],i;
	int *p;
	printf("\n Enter values of array");
	p=a;
	for(i=0;i<5;i++)
	{
		scanf("%d",p);
		p++;
	}
	p=p-5;
	for(i=0;i<5;i++)
	{
		printf("%d\t",*p);
		p++;
	}
	
}
