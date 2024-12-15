#include<stdio.h>
#include<conio.h>
int main()//prime no\\perfect\\Duck\\strong\\Armstrong
{
	 int num,sum,i,j;
	 printf("\n Enter a number");
	 scanf("%d",&num);
	for( i=1;i<=num;i++)//2
	{ sum=0;
	  for( j=1;j<i;j++)//2
	   {
	  	if(i%j==0)
	  	{
	  		sum=sum+j;
		}
	   }
	
	if(sum==i){
		printf(" %d",i);
	}
}
	 return 0;
}
