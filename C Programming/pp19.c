#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i>=j)
			{
				printf("%d",i);
			}
			else
			 printf("*");
		}printf("\n");
	}
}
