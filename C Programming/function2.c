//use functionto check number is prime number or not ,perfect number,duck number,strong,Armstrong
#include<stdio.h>
int main()
{
	void checkprime(int);
	
	int num;
	
	printf("\nEnter a number");
	scanf("%d",&num);
	checkprime(num);
	
	return 0;
}
void checkprime(int num)
{
	int i,flag=0;
	for(i=2;i<num;i++)
	{
	  if(num%i==0)
	  {
	    flag=1;
	  	break;
	  }
    }
	if(flag==0)
	{
	 printf("\n Number is  prime number");
	}
	else
	    {
		printf("\n Number is not prime number");
		}
}  
