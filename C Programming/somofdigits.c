//calculate first
#include<stdio.h>
int main()
{
	int num=1234,sum=0,r1,r2,r3,nnum,r4;
	r1=num%10;//4
	num=num/10;//123
	r2=num%10;//3
	num=num/10;//12
	r3=num%10;//2
	num=num/10;//1
	sum=r1+r2+r3+num;
	printf("\n Sum of digits %d",sum);
}
