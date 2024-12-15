//using pointer print array
#include<stdio.h>
int main()
{
	int *ptr;
	int a[5],i;
	ptr=a;
	printf("\nEnter array elements");
	for(i=0;i<5;i++)
	{
	  scanf("%d",(ptr+i));
	 // ptr++;	
	}
	//ptr=ptr-5;
	for(i=0;i<5;i++)
	{
		printf("\t%d",*(ptr+i));
		//ptr++;
	}
}


