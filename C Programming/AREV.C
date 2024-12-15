#include<stdio.h>

int main()
{
 int i,j,a[5],temp;
 
 printf("Enter values of arrays");
 for(i=0;i<5;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
   for(j=4;j>=0;j--)
   {
   temp=a[j];
   a[j]=a[i];
   a[i]=temp;
   }
 }
 for(i=0;i<5;i++)
 {
   printf("\t%d",a[i]);
 }
 
}
