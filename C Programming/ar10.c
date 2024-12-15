#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[10],k=0,c[10],n;
	clrscr();
	printf("\n Enter 10 elements of array");
	for(i=0;i<10;i++)
	{
	 scanf("%d",&a[i]);
	}
	printf("\nEnter position to rotate array");
	scanf("%d",&n);
	for(i=n;i<10;i++)
	{
	  c[k]=a[i];
	  k++;
	}
	for(i=0;i<n;i++)
	{
	 c[k]=a[i];
	 k++;
	}
	printf("\nDisplay Elements of Array");
	for(k=0;k<10;k++)
	{
		printf("%d ",c[k]);
	}

      getch();
}
