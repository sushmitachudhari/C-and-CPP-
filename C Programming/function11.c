//function for n number armstrong
#include<stdio.h>
int main()
{
	void narmstrong(int);
	int limit;
	printf("\nEnter limit");
	scanf("%d",&limit);
	narmstrong(limit);
	return 0;
}
void narmstrong(int lmt)
{
	int i,j,rem,p,sum,count,temp;
	for(i=1;i<=lmt;i++)
	{temp=i,count=0;
	  while(temp!=0)//153
	  {
	  	//rem=temp%10;//3
	  	count++;
	  	temp=temp/10;//15
	  }
	  temp=i,sum=0;//153
	  while(temp!=0)
	  {
	  	rem=temp%10;//3
	  	p=1;
	  	for(j=1;j<=count;j++)
	  	{
	  		p=p*rem;
		}
		  sum=sum+p;
	  	temp=temp/10;
	  }
		if(sum==i)
		{printf("\n %d",i);
		}
	}
}
