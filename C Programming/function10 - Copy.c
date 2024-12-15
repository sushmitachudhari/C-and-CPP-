//strong number upto n number using function
//sum of factorial of digits
#include<stdio.h>
int main()
{
	void nstrong(int);
	int limit;
	printf("\nEnter limit");//6
	scanf("%d",&limit);
	nstrong(limit);
	return 0;
	
}
void nstrong(int lmt)
{
	int sum=0,f,rem,i,j,temp;
	for(i=1;i<lmt;i++)
	{ temp=i,sum=0;
		while(temp!=0)
		{f=1;
			rem=temp%10;
			for(j=1;j<=rem;j++)
			{f=f*j;
			}
			sum=sum+f;
			temp=temp/10;
		}
		if(sum==i)
	    {
	    	printf("\n %d",i);
     	}
	}
}
