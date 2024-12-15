#include<stdio.h>
#include<conio.h>
int main()
{
	float height;
	printf("\n Enter height of Person");
	scanf("%f",&height);
	if(height<150.0)
	{ printf("\n The person is Dwarf");
	}
	else if(height>=150.0 && height<165.0)
	{
		printf("\n The person is Averege Heighted");
	}
	else if(height>=165.0 && height<=195)
	{
		printf("\n The Person is taller");
	}
	else
	  printf("\n The person is very taller");
	  
	return 0;  
}
