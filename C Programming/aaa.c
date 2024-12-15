#include<stdio.h>
int main()
{
	int f,l,num;
	printf("\nEnter a number");
	scanf("%d",&num);
	l=num%10;
	while(num>=10)
	{
		num=num/10;
	}
	f=num;
	printf("\nf=%d  l=%d",f,l);
}
