#include<stdio.h>
#include<conio.h>
int main()
{
	int num,rem,sum=0,m=0,mul;
	printf("\n Enter a number");
	scanf("%d",&num);
	mul=num*num;
	m=mul;
	printf("\n %d",mul);
	while(mul!=0)
	{
		rem=mul%10;
		mul=mul/10;
		sum=sum+rem;
		
	}
	printf("\n sum %d",sum);
    if(sum==num)
	{
    printf("\n Number is Neon  %d",sum);
	}
	else	
		{
		   printf("\n Not Neon %d",sum);
		}
   
 return 0;	
}
