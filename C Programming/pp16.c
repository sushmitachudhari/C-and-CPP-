#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=65;i<70;i++)
	{
		for(j=65;j<70;j++)
		{
			if(i>=j)
		{
				printf("%c",j);
			}
			else
			 printf(" ");
		}printf("\n");
	}
}
