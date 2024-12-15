#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=1;j--)
		{
			if(j<=6-i)
			{
				if(i%2==0)
				{
					printf("*");
				}
				else
				    printf("%d",j);
			}
			else
			    printf(" ");
		}
		printf("\n");
	}
}
