#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter Month Number");
	scanf("%d",&n);
	switch(n)
	{
		case 1:printf("\n January 31");break;
		case 2:printf("\n February 28");break;
		case 3:printf("\n March 31");break;
		case 4:printf("\n April 30");break;
		case 5:printf("\n May 31");break;
		case 6:printf("\n June 30");break;
		case 7:printf("\n July 31");break;
		case 8:printf("\n August 31");break;
		case 9:printf("\n september 30");break;
		case 10:printf("\n October 31");break;
		case 11:printf("\n November 30");break;
		case 12:printf("\n December 31");break;
		default:printf("\nInvalid Month Number");
	}
	return 0;
}
