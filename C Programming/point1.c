//sample first pointer
#include<stdio.h>
int main()
{
	int a,b;
	int *p,*q;
	//swapping
	printf("\nEnter 2 values ");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	printf("\n Value of a=%d\t b=%d",a,b);
	printf("\n Value of p=%u\t q=%u",p,q);
	printf("\n Address of a=%u\t b=%u",&a,&b);
	printf("\n Address of p=%u\t q=%u",&p,&q);
	printf("\n value p=%d \t q=%d",*p,*q);
	
}
