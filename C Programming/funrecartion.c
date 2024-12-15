#include<stdio.h>
int main()
{
	int recursive(int);
	int f=0;
	f=recursive(5);
	printf("\n Factorial %d",f);
	return 0;
}
int recursive(int num)
{
	int f=1,i;
	i=num;
	while(i>0)
	{
		return f * recursive(i--);
	}
}
