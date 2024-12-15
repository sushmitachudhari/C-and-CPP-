#include<stdio.h>
#include<stdlib.h>
int main()//prime no\\perfect\\Duck\\strong\\Armstrong
{
	 int num,flg,i,j;
	printf("\n Enter a Limit");//50
	 scanf("%d",&num);
	  for( i=10;i<=num;i++)//10
	   {j=i;
	   flg=0;
	  	   while(j>0)
	     {
	       if(j%10==0)
	       {flg=1;
	       break;
	     	}
	     	j=j/10;
	      }
	     if(i>0 && flg==1)
	     {
	     	printf("\n%d is Duck Number",i);
		 }
	   } 
	 return 0;
}
