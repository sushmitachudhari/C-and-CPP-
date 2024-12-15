#include<stdio.h>
int main()
{
	int num=123,r1,r2,r3,rev;
	
	r1=num%10;//3
	num=num/10;//12
	r2=num%10;//2
	num=num/10;//1
	r3=num%10;//1
	rev=r1*100+r2*10+r3;
	printf("\nreverse is %d",rev);
}
