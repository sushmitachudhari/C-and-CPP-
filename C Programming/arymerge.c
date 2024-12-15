//merge 
#include<stdio.h>
int main()
{
	int a[5],b[5],c[10],i,j,temp,k;
	printf("\nEnter first array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter Second array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	//merge logic;
	k=0;
	for(i=0;i<5;i++)
	{
		c[k]=a[i];//store 1st array
		k++;
	}
	for(i=0;i<5;i++)
	{
		c[k]=b[i];
		k++;
	}
	//sort the array after mearge
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(c[i]>c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	printf("\n Display array after merge");
	for(i=0;i<10;i++)
	{
		printf("\t%d",c[i]);
	}
	
 } 
