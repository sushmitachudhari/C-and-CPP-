#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char ch='A' ,ch1;
	for(i=0;i<5;i++)
	{   ch1=ch+i;
		for(j=0;j<5;j++)
		{
		  printf("%c  ",ch1+j);
			
		}printf("\n");
	}
}
