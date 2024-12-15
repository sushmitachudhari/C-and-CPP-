#include<stdio.h>
#include<conio.h>
int main()
{
	int n,c;
	printf("\n Enter a number");
	scanf("%d",&n);

	while(n!=0)
	{
		n=n/10;
		c++;
	}
	printf("\n Count of Digits %d",c);
	return 0;
}
