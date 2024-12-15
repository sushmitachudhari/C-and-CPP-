//write c program to addition of two matrices
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("\nEnter Elements of  First 3*3 Matrix");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
		printf("\nEnter Elements of  second 3*3 Matrix");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		scanf("%d",&b[i][j]);
		}
	}
		printf("\nDisplay Elements of  First 3*3 Matrix\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
		printf("\nDisplay Elements of  second 3*3 Matrix\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	//Addition of two 3*3 matrices
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	//Display of Addition of 3*b matrices
	printf("\nDisplay Elements of  Addition 3*3 Matrix\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("\t%d",c[i][j]);
		}
		printf("\n");
	}
}
