#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j;
	clrscr();
	printf("Enter values of arrays");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=a[i]+1;j<a[i+1];j++)
		{

		printf(" %d\t",j);
	}
	getch();
}     }
