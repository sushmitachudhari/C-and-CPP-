#include<stdio.h>
#include<conio.h>
int main()
{
	int f,l,no;
	printf("Enter a number digit more than 2");
	scanf("%d",&no);
	
	l=no%10;
	
	while(no>=10)
	{
	no=no/10;
	}
	 f=no;	
   // }
   
    printf("First %d  Last %d",f,l);
		   
	return 0;
	
}
