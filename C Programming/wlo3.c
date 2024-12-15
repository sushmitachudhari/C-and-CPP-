#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,r,rev=0;
    printf("\n Enter a number");
	scanf("%d",&n);
	i=0;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
		i++;
		
		
		
	}	
	printf("\nReverse is %d",rev);
	return 0;
	
}
