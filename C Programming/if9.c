#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	printf("\n Enter Your AGE");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("\n Congratulation! You are Eligible for casting your vote");
	}
	else
	    printf("Sorry!! You are not Eligible");
	    
	return 0;    
}
