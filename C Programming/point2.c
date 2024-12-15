//swapping using pointer
#include<stdio.h>
int main()
{
	int a=8,b=5;
	int *p,*q;
	//swap using pointer
	 printf("\n\nA= %d\tB= %d",a,b);
	p=&a;
	q=&b;
	*p= *p + *q;
	*q= *p - *q;
	*p= *p - *q;
    printf("\n\nA= %d\tB= %d",a,b);
}
