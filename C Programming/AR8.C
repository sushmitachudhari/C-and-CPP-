
#include<stdio.h>

int main()
{
   int a[10],size,num,temp,i,j,count=0,n;
   
   printf("\nEnter Array Element");
   for(i=0;i<10;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0;i<10;i++)
  {  for(j=i+1;j<10;j++)
    {    if(a[i]>a[j])
	{
	  temp=a[i];
	  a[i]=a[j];
	  a[j]=temp;
	}
    }
   }
   printf("\n After Sorting");
   for(i=0;i<10;i++)
   {
      printf("\t%d",a[i]);
   }
   count=1;
   for(i=0;i<10;i++)
   {
       if(a[i]==a[i+1])
       {
	 count++;
       }
   }
   printf("\n count %d",count);
   size=sizeof(a)/2;
   size=size/2;
   if(count>size)
   {
    printf("\n %d is mejority elements",num);
   }
   else
    printf("\n Not Majority element Contain");
  
}
