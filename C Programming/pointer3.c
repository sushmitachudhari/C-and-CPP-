#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *ptr1,*ptr2,temp;
	
	ptr1=&a;
	ptr2=&b;
	
	printf("Ptr1 Address Is : %d",ptr1);
	printf("\nPtr2 Address Is : %d",ptr2);
	
	printf("\nPtr1 value Is : %d",*ptr1);
	printf("\nPtr2 Value Is : %d",*ptr2);
	
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	
	printf("\n  value of a Is : %d",a);
	printf("\n Value of b Is : %d",b);
}
