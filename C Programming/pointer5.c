//array using pointer
#include<stdio.h>
int main()
{
	int a[5] ,i;
	int *ptr;
	
	printf("\n Enter values of array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=a;
	for(i=0;i<5;i++)
	{
		printf("\n %d---->%d",ptr,*ptr);
		ptr++;
	}
	
}
