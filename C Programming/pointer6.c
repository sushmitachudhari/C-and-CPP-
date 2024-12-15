//copy 1 array to another
#include<stdio.h>
int main()
{
   int a[5],b[5],i;
   int *ptr;
   printf("\n Enter values of array");
   for(i=0;i<5;i++)
   {
     scanf("%d",&a[i]);   	
   }	
   ptr=a;
   for(i=0;i<5;i++)
   {
   	b[i]=*ptr;
   	ptr++;
   }
   printf("\nAfter copy array");
   for(i=0;i<5;i++)
   {
   	printf("\n %d----->%d\t%d----->%d",&a[i],a[i],&b[i],b[i]);
   }
}
