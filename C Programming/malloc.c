#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,*ptr1;
	int size,i;
	printf("\nEnter size of array");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("\nEnter array elements\n");
	for( i=0;i<size;i++)
	{
		scanf("%d",ptr+i);
		
	}
	//ptr=ptr-size;
		printf("\nEnter size of array");
	scanf("%d",&size);
	printf("\nEnter array elements\n");
	for( i=0;i<size;i++)
	{
		scanf("%d",ptr+i);
		
	}
	ptr1=(int*)realloc(ptr1,size);
	printf("\nDisplay Array Elements");
	for( i=0;i<size;i++)
	{
		printf("%d",*(ptr+i));
		
	}
}
