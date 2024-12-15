#include<stdio.h>
//#include<conio.h>
int main()
{
	int i,a[5],value,index;
	
	printf("Enter five values of Array size six ");
	for(i=0;i<5;i++)
	{
		scanf("%d ",&a[i]);
	}
	//printf("Display Array values");
	
		printf("\n Enter a value to insert, and Index");
	    scanf("%d %d",&value,&index);
	   
	for(i=4;i>=index;i--)
	{
	a[i+1]=a[i];
	}
	a[index]=value;
	printf("Display After Insertion Array values");
	for(i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	
	}	 
	
}
