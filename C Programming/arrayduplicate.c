//remove duplicate elements
#include<stdio.h>
int main()
{
	int a[20],size,i,j,k;
	printf("Enter Array size");
	scanf("%d",&size);
	printf("\n Enter Array %d Elements",size);
	for(i=0;i<size;i++)
	{
		scanf("\t%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				//a[j]=NULL;
				for(k=j;k<size-1;k++)
				{
				  a[k]=a[k+1];
				}
				size--;
				j--;
			}
		}
	}
	printf("\nArray Elements are\n");
	for(i=0;i<size;i++)
	{
		printf("\t%d",a[i]);
	}
}
