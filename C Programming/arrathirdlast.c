//Find Third last from array using Dynamic Memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
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
	ptr=ptr-size;//Take the pointer to First address 
	printf("\n Display of Array");
	for(i=0;i<size;i++)     // Display the array
	{
		printf("\n%d",*ptr);
		ptr++;
	}
	ptr=ptr-size;
	for(i=0;i<size;i++)//Sorting of array elements
	{
		for(j=i+1;j<size;j++)
		{
			if(*(ptr+i) >= *(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)= *(ptr+j);
				*(ptr+j)= temp;
			}
		}
	}
		printf("\n Display of Array");//Display the array
	for(i=0;i<size;i++)
	{
		printf("\n%d---->%u",*ptr,ptr);
		ptr++;
  	}   
  	// for finding 3rd largest number
      ptr=ptr-size;
  	 	for(i=0;i<size;i++)//array is sorted 
	{ 
	  if(*(ptr+(size-2))!=*(ptr+(size-1)))
	  {
	  	flag=1;
	  	val=*(ptr+(size-3));
		  //printf("\nThird higest is %d",*(ptr+(size-3)));
	  }
	  else if(*(ptr+size-2)==*(ptr+size-3))
	  {
	  	//printf("\nThird higest is %d",(ptr+(size-4)));
	  	flag=2;
	  	val1=*(ptr+(size-4));
	  }
	}
	if(flag==1)
	{
	 printf("\nThird higest is %d",val);	
	}
	if(flag==2)
	{
	 printf("\nThird higest is %d",val1);	
	}
	
}
