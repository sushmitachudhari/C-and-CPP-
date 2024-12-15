//strong number using function  digit factorial sum
#include<stdio.h>
int main()
{
  void strongnum(int);
  int num;
  printf("\nEnter a number");
  scanf("%d",&num);
  strongnum(num);
  return 0;	
}
 void strongnum(int num)
{
	int f,i,rem,sum=0,temp;
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		f=1;
		for(i=1;i<=rem;i++)
		{
			f=f*i;
		}
		sum=sum+f;
	}
	if(temp==sum)
	{
		printf("\n Number is strong number");
	}
	else
	{
		printf("\n Not strong");
	}
}
