#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 || i==1 || j==5|| i==5 || j==6-i)
			{
				printf("*");
			}
			else
			  printf(" ");
		}printf("\n")
	}
}
