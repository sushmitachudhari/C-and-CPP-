//array remove element from index Entered by user
//without size program is ok 
#include<stdio.h>
int main()
{
	int a[12],i,index,size;
	printf("\nEnter size to create array");
	scanf("%d",&size);
	printf("\nEnter %d Elements of Array",size);
	for(i=0;i<size;i++)
	{
		
		scanf("%d",&a[i]);
	}
	printf("\nEnter Index to remove elements");
	scanf("%d",&index);
	a[index]=NULL;
	for(i=index;i<size;i++)
	{
	  a[i]=a[i+1];
	}
	a[size-1]=NULL;
	//Display array after removing Element
	printf("\nDisplay of Array after remove\n");
	for(i=0;i<size-1;i++)
	{
		printf("\t%d",a[i]);
	}
}
