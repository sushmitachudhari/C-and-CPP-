//Add Employee records
#include<stdio.h>
struct emp{
	int id;
	char name[10];
	int sal;
} e[3];
int main()
{
	int i,sid,sname;
	printf("\nEnter Employee Details...Id...Name...Salary");
	for(i=0;i<3;i++)
	{
		printf("Enter for %d emp",i+1);
		scanf("%d%s%d",&e[i].id,&e[i].name,&e[i].sal);
	} 
	
	//Display
	printf("\nRecord is Here...\n");
	for(i=0;i<3;i++)
	{
		printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
	}
}
