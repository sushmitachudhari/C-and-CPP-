//Rotate Array n times
#include<stdio.h>
int main()
{
	int *ptr;
	int a[6],c[6],k,i,j,index;
	//Declaration of array and variable
	printf("\nEnter  Six Elements of Array");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);//Input for array elements
	}
	
	//input index value from user
	
	printf("\n Enter index to rotate array");
	scanf("%d",&index);
	k=0;
	for(i=index;i<6;i++)
	{
		c[k]=a[i];
		k++;
	}
		for(i=0;i<index;i++)
	{
		c[k]=a[i];
		k++;
	}
	//Display array after rotate
	printf("\nArray elements after rotation\n");
	
	for(i=0;i<k;i++)
	{
		printf("\t%d",c[i]);
	}
}

