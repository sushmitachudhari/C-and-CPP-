#include<stdio.h>
int main()
{
	int a[5],i,j;
	printf("Enter values of Arrays in Asending order ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	

		for(i=a[0]+1;i<=a[4];i++)
	{
	
			if(a[i]==i)
		{
	        //j=i;
			//printf("\t%d",j);
			
			break;
		}
		else
		   printf("\t %d",i);

	}
}
