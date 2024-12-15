#include<stdio.h>
#include<conio.h>
int main()//prime no\\perfect\\Duck\\strong\\Armstrong
{
	 int limit,rem,i,sum,temp,f;
	 printf("Enter limit");
	 scanf("%d",&limit);
	 for(i=1;i<=limit;i++)
	 {
	 	f=1;
	 	temp=i;
	 	while(i!=0)//1
	 	{
	 		rem=i%10;//1
	 		f=f*rem;//1 * 1
	 		i=i/10;
	 		sum=sum+i;
		 }
		 if(sum==temp)
		 {
		 	printf("%d is strong",i);
		 }
		 else
		    printf(" %d is Not Strong",i);
		 
	 }
	 return 0;
}
