#include<stdio.h>
#include<conio.h>
int main()
{
	 int i,j,flag;
	 for(i=1;i<=5;i++)
	 {  flag=1;
	 	for(j=1;j<=9;j++)
	    {
	    	if(j>=6-i && j<=4+i && flag)
	    	{
	    		if(i%2==0)
				{
					printf("*");
				}
				else
				{
				printf("#");}
	    		flag=0;
			}
			else
			{
				printf(" ");
				flag=1;
			}
		}
		printf("\n");
	 }
}
