//Search employee
#include<stdio.h>
struct emp{
  int id;
  char name[10];
  int sal;	
}e[3];
int main()
{
	int i,sid;
	char sname[10];
	printf("\nEnter Employee Details...ID...Name...Sal...");
	for(i=0;i<3;i++)
	{
		printf("\nEnter for %d Employee...",i+1);
		scanf("%d %s %d",&e[i].id,e[i].name,&e[i].sal);
	}
	//Display Records
	printf("\nRecords are...");
	for(i=0;i<3;i++)
	{
		printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
	}
}
