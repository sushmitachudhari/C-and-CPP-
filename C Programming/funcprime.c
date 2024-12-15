#include<stdio.h>
int main()
{
	int primeno(int);
	int number,num;
	printf("\nEnter a number");
	scanf("%d",&number);
	 num=primeno(number);
	if(num==1)
	{
		printf("\n  %d is Prime number",number);
	}
	else{
		printf("\n  %d is not prime number",number);
	}
}
int primeno(int num)
{
	int i,count=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
	    }
    }
		if(count==2)
		{   
			return 1;
		}
		else
		  {
		  	 return 0;
		  }
	
	
}
