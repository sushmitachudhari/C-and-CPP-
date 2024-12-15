#include<stdio.h>
int main()
{
	int a,b,*ptr,*ptr1;
	a=6;
	b=4;
	ptr=&a;
	ptr1=&b;
	printf("\nArithmetic operations using Pointer\t%d\t%d",*ptr,*ptr1);
	printf("\n%d + %d =%d",*ptr,*ptr1,*ptr + *ptr1);
	printf("\n%d - %d =%d",*ptr,*ptr1,*ptr - *ptr1);
	printf("\n%d * %d =%d",*ptr,*ptr1,*ptr * *ptr);		
	printf("\n%d / %d =%d",*ptr,*ptr1,*ptr / *ptr1);	
	printf("\n%d mod %d =%d",*ptr,*ptr1,*ptr %  *ptr1);	
}
