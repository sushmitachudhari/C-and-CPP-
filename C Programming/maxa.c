#include<stdio.h>
int main()
{
	int a[6],i,max,j;
    t
     i=0;
     while(i<6)
     {max=a[i];
     	for(j=0;j<6;j++)
     	{
     		if(max>= a[j])
     		{
     			max=max;
			 }
			 else
			 {
			 	max=a[j];
			 }
		}
		i++;
	 }
	 printf("%d is max of array",max);
}
