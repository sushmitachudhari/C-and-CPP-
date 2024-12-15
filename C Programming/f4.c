#include<stdio.h>
#include<conio.h>
int main()
{
	 int f,n,temp,rem,i,sum=0;
	 printf("\n Enter a 3 digit number");
	 scanf("%d",&n);  // 145
	 temp=n;
	 while(n!=0)
	 {
	 	rem=n%10;   // 4
	 	i=1,f=1;
	 	while(i<=rem)  // 5<=5
	 	{
	 		f=f*i;    // 24
	 		i++;
		}
		sum=sum+f;  // 145
	 	
	 	n=n/10;
	 }
	 if(temp==sum)
	 {
	 	printf("\n Number is strong");
	 }
	 else
	    printf("\n Number is not strong number");
	 
	 
	return 0;	 
}
