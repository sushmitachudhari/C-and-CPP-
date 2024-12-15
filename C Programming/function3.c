//perfect number using function
//factors sum=number
#include<stdio.h>
int main()
{
	void perfectnum(int);//declaration
	int num;
	printf("\nEnter the number");
	scanf("%d",&num);
	perfectnum(num);
	return 0;
}
 void perfectnum(int num)
 {
 	int i,sum=0;
 	for(i=1;i<=(num/2);i++)
 	{
 	      if(num%i==0)
		   {
		   	 sum=sum+i;
		   }	
	}
	 if(sum==num)
	 {
	 	printf("\nPerfect number");
	 }
	 else
	   {
	   	printf("\n Not Perfect number");
	   }
 }
