//Duck number using function
#include<stdio.h>
int main()
{
	void ducknum(int);
	int num;
	printf("\nEnter a number");
	scanf("%d",&num);
	ducknum(num);
	return 0;
}
 void ducknum(int num)
 {
 	int flag=0,rem;
 	while(num!=0)
 	{
 		rem=num%10;
 	    	if(rem==0)
 		    {
			 flag=1;
 		     break;
		     }
		 
 		num=num/10;
	 }
	 	if(flag)
 		{printf("\nNumber is Duck");
		 }
		else
		{printf("\nNumber is not duck");
		} 
 }

