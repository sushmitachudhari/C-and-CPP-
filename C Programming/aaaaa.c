#include<stdio.h>
int main()
{
	int num=5342,rem,a[4],i,j,temp;
	i=0;
	while(num!=0)
	{
		rem=num%10;
		a[i]=rem;
		i++;
		num=num/10;
	}
	for(i=0;i<4;i++)
	{
		printf("\n%d ",a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(a[i]>a[j])
			{ temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	
	num=0;
	for(i=0;i<4;i++)
	{
      num=num*10+a[i];
	}
	printf("\n Number after sorting is %d ",num);
}
