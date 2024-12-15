//function using switch case 1.revese number 2.palindrome 3.power of number 4.sum of digits
#include<stdio.h>
int main()
{

	int revnum(int);
	void palindrome(int);
	void pownum(int,int);
	void sumofdigits(int);
		int ch,num,index,rev,sum=0;
		
		printf("\n==================================");
		printf("\n\tMenu");
		printf("\n==================================");
		printf("\n1.Reverse number\n2.Check Palindrome number\n3.Calculate Power of Number\n4.Sum of Digits\n");
		printf("\n==================================\nChoose From Above");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\nEnter a number");
			       scanf("%d",&num);
			       revnum(num); break;
			       
			case 2:printf("\nEnter a number");
			       scanf("%d",&num);
			      palindrome(num);break;
			       
			case 3:printf("\nEnter Base value and Index value");
			       scanf("%d %d",&num,&index);
			       pownum(num,index);break;
			       
			case 4:printf("\nEnter a number");
			       scanf("%d",&num);
			       sumofdigits(num);break;
			       
			default:printf("\n You have Entered Wrong Choice");	
		}
}
	int revnum(int num)
	{
		int rev=0,rem=0;
		while(num!=0)
		{             //123
			rem=num%10;//3//2//1
			rev=rev*10+rem;//0+3=3//30+2 //320+1
			num=num/10;//12//1
		}
		printf(" Reverse of number is %d",rev);
		return rev;
	}
	void palindrome(int num)
	{	
	     int rev=revnum(num);
	     if(num==rev)
	     {
	     	printf("\nNumber is palindrome");
		 }
		 else
		    printf("\nNumner is Not Palindrome");
	}
	void pownum(int base,int index)
	{
		int i,pow=1;
		for(i=1;i<=index;i++)
		{
			pow=pow*base;
		}
		printf("\nPower of number is %d",pow);
	}
	void sumofdigits(int num)
	{
		int  rem,sum=0;
		while(num!=0)
		{
			rem=num%10;
			sum=sum+rem;
			num=num/10;
		}
		printf("\nSum of Digits of Number is %d",sum);
	}
	

