#include<stdio.h>
int main()
{
	int *ptr;
	int sum=0,i,a[5];
	printf("\n Enter values of array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=a;
	for(i=0;i<5;i++)
	{
		sum=sum+ *ptr;
		ptr++;
	}
	printf("\n Sum of Array Element using Pointer---->%d",sum);
	
}
