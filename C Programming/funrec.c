#include<stdio.h>
int main()
{
	int calling(int* ,int*);
	int a=10,b=20;
	calling(&a,&b);
	printf("\nA=%d\tB=%d",a,b);
	getch();
}
int calling(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("\nX=%d\ty=%d",*x,*y);
	
}
