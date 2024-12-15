#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i;
	printf("\n1.positive,Negative,Zero\n2.Even,Odd\n3.Max\nEnter Your choice");
	scanf("%d",&i);
	switch(i)
	{
		case 1:printf("\nEnter a  number");
		       scanf("%d",&a);
		       if(a>0)
		        printf("\nPositive");
		       else
			    printf("\n Negative"); 
		       if(a==0)
			    printf("\n Zero");
				break;
		case 2:printf("\nEnter a number");
		        scanf("%d",&a);
				if(a%2==0)
				   printf("\nEven");
				else
				   printf("\nOdd");
				break;
		case 3:printf("\nEnter Two Numbers");
		        scanf("%d %d",&a,&b);
				if(a>b)
				  printf("\n %d is MAX",a);
				else
				  printf("\n %d is MAX",b);
				break;
		default:printf("Invalid Choice");			    		   
				      		 
	}
	return 0;
}
