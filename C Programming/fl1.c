#include<stdio.h>
#include<conio.h>
int main()//prime no\\perfect\\Duck\\strong\\Armstrong
{
	 int num,c,i,j;
	 printf("\n Enter a number");
	 scanf("%d",&num);
	for( i=1;i<=num;i++)
	{ c=0;
	  for( j=1;j<=i;j++)
	   {
	  	if(i%j==0)
	  	{
	  		c++;
		}
	   }
	
	if(c==2)
	{
		printf(" %d",i);
	}
}
	 return 0;
}
