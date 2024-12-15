//second large of array
#include<stdio.h>
int main()
{
	int a[5],i,temp,j,sl;
	printf("\nEnterfive size of array Elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n Second largest of array %d",a[3]);

	
}
