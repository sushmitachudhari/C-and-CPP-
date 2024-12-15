#include<stdio.h>
#include<stdlib.h>
int main()
{
	int max1,max2,max3;
	int *ptr,size,i,j,temp,val=0,val1=0,flag=0;   //declaration of pointer and variable
	printf("\nEnter size to create Dynamic array");
	scanf("%d",&size);          // Array size Input from User  
	ptr=(int*)malloc(sizeof(int)*size);//malloc Funtion to create array
	
	printf("\n Enter Array elements ");
	for(i=0;i<size;i++)//Input elements of Array from User
	{
		scanf("%d",ptr);
		ptr++;
    }
	ptr=ptr-size;
	max1=*(ptr+0);
	max2=*(ptr+0);
	max3=*(ptr+0);
	
	for(i=0;i<size;i++)
	{  
	   if(*(ptr+i) > max1)
	   { max3=max2;
	   	 max2=max1;
	   	 max1=*(ptr+i);
	   }
	   else if(*(ptr+i)>max2 && *(ptr+i) !=max1)
	   {max3=max2;
	   	max2=*(ptr+i);
	   }
	   else if(*(ptr+i)>max3 && *(ptr+i)<max2)
	   {
	     max3=*(ptr+i);
	   }
	   
	}
	printf("\n Third Max of array is %d",max3);
	printf("\n Second Max of array is %d",max2);
	
}
