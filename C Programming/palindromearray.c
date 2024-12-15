//check array is palindrome or not
#include<stdio.h>
int main()
{
	int a[5],b[5],i,j,flag=0;
	printf("\n Enter array Elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	j=5;
	for(i=0;i<5;i++)
	{
	  b[j-1]=a[i];
	  j--;
	}
	
	printf("\n reverse array B\n");
	for(i=0;i<5;i++)
	{
		printf("\n%d\t%d\t",i,b[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==b[i])
		{
			flag=1;
		}
		else{
			flag=0;
			break;
		}
	}
	printf("\nDisplay aaray");
	for(i=0;i<5;i++)
	{
		printf("\n%d\t%d",i,a[i]);
	}
	if(flag==1)
	{
		printf("Array is palindrome");
	}
	else
	{
		printf("\nArray is not Palindrome");
	}
}
