#include<stdio.h>
int main()
{
	int *ptr;
	int a[5],b[5],c[5],i,j,flag=0;
	printf("\nEnter 5 Elements of First Array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("\nEnter 5 Elements of Second Array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	ptr=c;
	for(i=0;i<5;i++)
	{
		*ptr=a[i];
		ptr++;
	}
		for(i=0;i<5;i++)
	{
		*ptr=b[i];
		ptr++;
	}
	
	for(i=0;i<10;i++)
	{  flag=0;
		for(j=i+1;j<10;j++)
		{
			if(c[i]==c[j])
			{
				flag=1;
				break;
			}
		}
	
	if(flag==0)
	{
		printf("%d\t",c[i]);
		
	}
}
}
