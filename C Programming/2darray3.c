//Substraction of 2 3*3 Matrices
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("\n Enter  First 3*3 matix elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Enter Second 3*3 Matrix Elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//Display of First Matrix
	printf("\nFirst Matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
		//Display of Second Matrix
	printf("\nSecond Matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	//Substraction Of 3*3 Matrix
	printf("\nSubstraction of 3*3 Matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("\t%d",c[i][j]);
			
		}printf("\n");
	}
}
