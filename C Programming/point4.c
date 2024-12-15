//sort array using pointer
#include<stdio.h>
int main()
{
	int a[5],i,j,temp;
	int *p;
	printf("\n Enter 5 Elements of array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	
	for(i=0;i<5;i++)
	{  for(j=i+1;j<5;j++)
	  {
	   if(*(p+i)>*(p+j))
	   { 
	     temp=*(p+i);
	   	 *(p+i)= *(p+j);
	     *(p+j)=temp;	   	
	   }
	   
	  }
    }
	
		for(i=0;i<5;i++)
	{
		printf("\t %d",*p);
		p++;
	}
	
}
