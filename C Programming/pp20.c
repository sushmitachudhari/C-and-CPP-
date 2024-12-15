#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,ch=65;
	for(i=1;i<=5;i++)
	{ 
		for(j=1;j<=5;j++)
		{
		   if(j%2!=0 && i%2!=0 || j%2==0 && i%2==0)
		   {
		   	printf("*");
		   }
		   else
		   {
		   	  printf("%c",ch);
		   	  ch++;
		   }
		   
		   
		}printf("\n");
			}
}
