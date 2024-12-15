#include<stdio.h>
#include<conio.h>
int main()
{
	int n500=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0,amount;
	printf("\nEnter the amount");
	scanf("%d",&amount);
	if(amount>=500)
	{
		n500=amount/500;
		amount=amount-n500*500;
	}
	if(amount>=100)
	{
		n100=amount/100;
		amount=amount-n100*100;
	}if(amount>=50)
	{
		n50=amount/50;
		amount=amount-n50*50;
	}if(amount>=20)
	{
		n20=amount/20;
		amount=amount-n20*20;
	}if(amount>=10)
	{
		n10=amount/10;
		amount=amount-n10*10;
	}if(amount>=5)
	{
		n5=amount/5;
		amount=amount-n5*5;
	}if(amount>=2)
	{
		n2=amount/2;
		amount=amount-n2*2;
	}if(amount>=1)
	{
		n1=amount/1;
		amount=amount-n1*1;
	}
	printf("\n 500 = %d",n500);
	printf("\n 100 = %d",n100);
	printf("\n 50 = %d",n50);
	printf("\n 20 = %d",n20);
	printf("\n 10 = %d",n10);
	printf("\n 5 = %d",n5);
	printf("\n 2 = %d",n2);
	printf("\n 1 = %d",n1);
	return 0;
}
