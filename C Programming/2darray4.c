//Multiplication of 3*3 Matrix
#include<stdio.h>
int main()
{
int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
 printf("\n Enter Elements of First 3*3 Matrix");
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		scanf("%d",&a[i][j]);
	 }
 }
  printf("\n Enter Elements of Second 3*3 Matrix");
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		scanf("%d",&b[i][j]);
	 }
 }
 printf("\n  Elements of First 3*3 Matrix\n");
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		printf("\t%d",a[i][j]);
	 }printf("\n");
 }
  printf("\n  Elements of Second 3*3 Matrix\n");
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		printf("\t%d",b[i][j]);
	 }printf("\n");
 }
 
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{ sum=0;
 		for(k=0;k<3;k++)
 		{
 		 sum=sum+a[i][k]*b[k][j];	
		 }
		 c[i][j]=sum;
	 }
 }
 
 printf("\n Multiplication of 2 3*3 Matix is\n");
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		printf("\t%d",c[i][j]);
	 }
	 printf("\n");
 }
}
