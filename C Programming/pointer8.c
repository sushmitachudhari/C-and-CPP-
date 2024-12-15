//sort array in ascending order
#include<stdio.h>
int main()
{
	int a[5],i,temp,j;
	int *ptr;
	
	printf("\n Enter Elements of Array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDisplay before sorting\n");
	for(i=0;i<5;i++)
	{
		printf("\t %d",a[i]);
	}
	ptr=a;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(*ptr > a[j])
			{
				temp=*ptr;
				*ptr=a[j];
				a[j]=temp;
			}
		}
		ptr++;
	}
		printf("\nDisplay After sorting\n");
	for(i=0;i<5;i++)
	{
		printf("\t %d",a[i]);
	}
}
