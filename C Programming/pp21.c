#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char ch;
	for(i=1;i<=5;i++)
	{ch=65;
		for(j=1;j<=9;j++)
		{ 
			if(j>=6-i && j<=4+i)
			{
				printf("%c",ch);
				ch++;
			}
			else
			    printf(" ");
		}printf("\n");
	}
}
