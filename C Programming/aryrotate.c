//rotate an array using pointer
    #include<stdio.h>
	int main()
	{
        int a[10],i,index,c[10],k;
        int *p,*q;
        p=c;
		printf("\n Enter 10 elements of array");
		for(i=0;i<10;i++)
		{
		    scanf("%d",&a[i]);
		}	
         printf("\nEnter index from rotate array");
		 scanf("%d",&index);
		 k=0;
		 	for(i=index;i<10;i++)
			 {
			    c[k]=a[i];
				k++;	
			 }	
			 	for(i=0;i<index;i++)
			 {
			    c[k]=a[i];
				k++;	
			 }	
			printf("\n Display array after rotation\n");
		for(i=0;i<10;i++)
		{
		    printf("%d\t",c[i]);
		}	 
    }           
