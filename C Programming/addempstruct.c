#include<stdio.h>
int main()
{
	//add employee using struct
	struct emp{
		int id;
		char name[10];
		int sal;
	};
	struct emp e[3];
	int i;
	printf("\n Enter Id , name, Salary of 3 Employees");
	for(i=0;i<3;i++)
	{
			scanf("%d%s%d",&e[i].id,e[i].name,&e[i].sal);
	}

     
    for(i=0;i<3;i++)
    {
    	if(e[i].sal>3000 && e[i].sal<5000)
    	{
    			printf("\nId=%d\nName=%s\nSal=%d",e[i].id,e[i].name,e[i].sal);
		}
	}

}
