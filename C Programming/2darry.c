//2D array of size 3*3 and display it
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("\n Enter elements of 3 by 3 matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Display of  2 Dimensional Matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}
