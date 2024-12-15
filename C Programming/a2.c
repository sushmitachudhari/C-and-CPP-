#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,max,min,flag=0;
	printf("\nEnter Values if Array Element");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			break;
		}
	}
	for(i=1;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			break;
		}
	}
	printf("\n Max value of Array is %d",max);
	printf("\n Min value of Array is %d",min);
}
