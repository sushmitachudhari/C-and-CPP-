#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=3;j++)
		{
           if(j==1 ||j==i|| i==6 || i==3 ||(i==5 && j==2))
		   {
		   	printf("*");
		   }			
		   else
		      printf(" ");
		}printf("\n");
	}
}
