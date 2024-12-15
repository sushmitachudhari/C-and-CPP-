#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,ch=65;
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=69;j++)
		{
			if(j>=i)
			{
				printf("%c",i);
			}
			else
			    printf(" ");
		}printf("\n");
	}
}
