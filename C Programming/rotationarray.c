#include<stdio.h>
int main()
{
	int a[6],i,index,temp,n;
	 n=sizeof(a)/sizeof(a[0]);
	 printf("\nEnter Array Elements  ");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("\nDisplay Array Elements\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("\t%d",a[i]);
	 }
	 printf("\nEnter Index where to rotate array");
	 scanf("%d",&index);
	 while(index--)
	 {
	 	temp=a[0];
	 	for(i=0;i<n;i++)
	 	{
	 		a[i]=a[i+1];
		 }
		 a[n-1]=temp;
	 }
	 printf("\nDisplay Array Elements\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("\t%d",a[i]);
	 }
}
