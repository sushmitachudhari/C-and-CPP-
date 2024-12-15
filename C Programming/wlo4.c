#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,i,rev=0,temp;
	printf("\n Enter a number");
	scanf("%d",&n);
	temp=n;
	i=0;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
		i++;
	}
	printf("%d is reverse\n",rev);
	if(temp==rev)
	{
		printf("%d is Palindrome",rev);
	}
	else
	 printf("\n Number is not palindrome");
	 return 0;
}
