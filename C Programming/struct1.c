#include<stdio.h>
int main()
{
	struct emp{
		int rn;
		char name[20];
		int sal;
		char loc[20];
	}e1[3];
	int i;

	for(i=0;i<3;i++)
	{   	printf("\nEnter The Rollno,Name,Salary,location for %d Employee ",i+1);
	    scanf("\n%d\t%s\t%d\t%s",&e1[i].rn,&e1[i].name,&e1[i].sal,&e1[i].loc);
	}
    for(i=0;i<3;i++)
    {
    		printf("\n%d\t%s\t\t%d\t%s",e1[i].rn,e1[i].name,e1[i].sal,e1[i].loc);
	}
}
