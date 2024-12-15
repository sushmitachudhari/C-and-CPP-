//store evn no at first and odd at lst
#include<stdio.h>
int main()
{
	int a[5],i,temp,e,o,rem;
	printf("\nEnter 5 elements of array with 4 digit");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{temp=a[i];
	  while(temp!=0)
	  {
	  	rem=temp%10;
	  	
	  	if(rem%2==0)
	  	{e=rem;
		  }
		else{
		o=rem;
		}  
		temp=temp/10;
	  }
	  	temp=a[i];
	  	
	}
}
