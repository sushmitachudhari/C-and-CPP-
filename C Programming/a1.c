#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,sum=0;
	printf("\n Enter 5 values of array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Sum of Array Element is %d",sum);
        }
     
