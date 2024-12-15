#include<stdio.h>
#include<conio.h>
int main()
{
	 int i,n,sum=0;
	 printf("Enter number");
	 scanf("%d",&n);
	 i=0;
	 while(i<=n)
	 {
	 	if(i%2==0)
	 	{
	 		sum=sum+i;
	 		
		 }i++;
     }
		 printf("\n Sum Of Even Numbers %d",sum);
	return 0;	 

}
