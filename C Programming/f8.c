#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num,rem,sum=0,x;
	printf("\n Enter a number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+pow(rem,2);
		num=num/10;
		printf("\n %d",sum);
	
	while(sum>1)
	{
		rem=sum%10;
		sum=sum/10;
		num=num+pow(rem,2);
		if(num==1){
		
		printf("\n %d",num);
	}
	else
	    printf("\n Not generated");
	}
	}
	return 0;
}
