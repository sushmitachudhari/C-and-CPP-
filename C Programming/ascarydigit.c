#include<stdio.h>
int main()
{
	int a[2],b[5],i,j,k,rem,count=0,temp;
	printf("\nEnter 2 Elements of array");
	for(i=0;i<2;i++)
	{
		scanf("%d",&a[i]);
	}
	count++;
	for(i=0;i<2;i++)
	{temp=a[i];
	    while(temp!=0)
	    {
	    	rem=temp%10;
	    	b[count]=rem
	       	temp=temp/10;
	    }
	    
		
	}
	for(i=0;i<count;i++)
	{
		printf("%d",b[i]);
	}
	
}

