//structure for max salary
#include<stdio.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
	};
	struct emp e[5];
	int i,max,index=0;
	printf("\nEnter 5 Recors of employee");
	for(i=0;i<5;i++)
	{
		scanf("%d %s %d",&e[i].id,e[i].name,&e[i].sal);
	}
	//display records
	printf("\nRecords\n");
	for(i=0;i<5;i++)
	{
		printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
	}
	//max salary
	max=e[0].sal;
	for(i=0;i<5;i++)
	{
		if(max<e[i].sal)
		{max=e[i].sal;
		index=i;
		}
	}
		printf("\nMax Salary\n%d\t%s\t%d",e[index].id,e[index].name,e[index].sal);
}
