#include<stdio.h>
int main()
{
	void calfibonacci(int,int,int);
	int n,n1,n2;
	printf("\nEnter the number of elements");
	scanf("%d",&n);
	printf("Fibonacci series\n");
	printf("\n%d\t%d  ",0,1);
	calfibonacci(n1,n2,n-2);

}
void calfibonacci(int n1,int n2,int n)
{
	static int n3;
	if(n>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("\t%d",n3);
		calfibonacci(n1,n2,n-1);
	}
}
