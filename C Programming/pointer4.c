//swapping of two numbers using pointers
#include<stdio.h>
int main()
{
	int num1=10,num2=5;
	int *ptr1,*ptr2;
	
	printf("\n num1=%d \n num2=%d",num1,num2);
	  
	ptr1=&num1;
	ptr2=&num2;
	*ptr1= *ptr1 + *ptr2 ;
	*ptr2= *ptr1 - *ptr2 ;
	*ptr1= *ptr1 - *ptr2 ;
	printf("\n num1=%d \n num2=%d",num1,num2);
	  
	
}
