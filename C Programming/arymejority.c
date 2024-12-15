//mejority array elements
#include<stdio.h>
int main()
{
	int a[8],i,j,count,temp,c,size;
	printf("\nEnter 8 size array Must be Sorted");
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
 	size=sizeof(a)/sizeof(a[0]);
    //printf("\n Size of %d",size);
    count=1;
    for(i=0;i<8;i++)
    {   
        temp=a[i];
     	for(j=i+1;j<8;j++)
     	{
     		if(temp==a[j])
     		{
     		  count++;
			}
			if(count>size)
			   	{
			   	    temp=a[j];
			   	    c=count;
			   	    
					   break; 	
				}
				else{
					printf("\n Not Found");
				}
		 }
	}		printf("\n%d Is mejority elements \n count is %d",temp,c);
	


}
