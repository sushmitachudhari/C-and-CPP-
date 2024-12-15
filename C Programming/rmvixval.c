#include<stdio.h>
int main()
{
	int a[5],value,i,k ,c[4];
	printf("\n Enter 5 values of Array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDisplay of Array");
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}
	
	printf("\n Enter index to remove value ");
	scanf("%d",&value);
	k=0;
	for(i=0;i<5;i++)
	{
		if(i!=value)
		{
		  c[k]=a[i];	
		}
		else
		{
			
		}
		k++;
	}
		printf("\nDisplay of Array");
	for(i=0;i<k;i++)
	{
		printf("\t%d",c[i]);
	}
}
