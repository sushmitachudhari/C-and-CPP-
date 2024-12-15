//addition of elements of array using pointer
#include<stdio.h>
int main()
{
	int a[5],*ptr,sum=0,i;//Declaration of array pointer and variable

	ptr=a;//Base address of array will be stored in pointer 
	printf("\nEnter Element of 5 Size array");//input from user
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
	}
	//Display of array
	printf("\n Array Elements\n");
	for(i=0;i<5;i++)
	{
		printf("\t%d",*(ptr+i));
	}
	//Sum of array elements usung pointer;
	for(i=0;i<5;i++)
	{
		sum=sum+ *ptr;
		ptr++;
	}
	 
	 printf("\n\n Sum Of Array elements is %d",sum);
	
}

