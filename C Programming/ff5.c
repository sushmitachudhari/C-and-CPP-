#include<stdio.h>
#include<conio.h>

int main()
{
	int num,onum,rem,count=0,pwr=0;
	printf("\nEnter a number");
	scanf("%d",&num);
	onum=num;
	while(num!=0)
	{
		rem=num%10;
		++count;
		num=num/10;		
	}
	printf("\n %d",count);
	num=onum;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		pwr=pwr+(rem*count);
	}
	printf("\n Power is %d",pwr);
	if(onum==pwr)
	{
		printf("\nArmstrong");
	}
	else
	    printf("\nNot a Armstrong");
	return 0;
}
