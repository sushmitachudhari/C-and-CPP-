//copy array using pointer
#include<stdio.h>
int main()
{
	int *ptr,*p;
	int a[5],b[5],i;
	ptr=a;
	p=b;
	printf("\nenter array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
	}
	//copy array
	for(i=0;i<5;i++)
	{
		p =ptr;
		p++;
		ptr++;
	}
	//display array
	p=p-5;
	ptr=ptr-5;
	printf("\nfirst array\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(ptr+i));
	}
		printf("\nsecond array\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(p+i));
	}
}
