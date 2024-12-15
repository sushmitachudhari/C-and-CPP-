#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=0,a[3],b[3],c[6];
	clrscr();
	printf("\n Enter Elements of 3 size First  array ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n Enter Elements of 3 size Second array ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&b[i]);
	}

	for(i=0;i<3;i++)
	{
	c[k]=a[i];
	k++;
	}
	for(i=0;i<3;i++)
	{
	 c[k]=b[i];
	 k++;
	}
	printf("\n Display Elements of 3 size sorted array ");
	for(i=0;i<6;i++)
	{
		printf("%d",c[i]);
    }
 getch();
}
