//struct delete records 
#include<stdio.h>
struct emp{
	int id;
	char name[10];
	int sal;
}e[5];
int main()
{
	int i,j,did,count=0;
	printf("\nEnter Records of 5 Employee");
	for(i=0;i<5;i++)
	{
		scanf("%d %s %d",&e[i].id,&e[i].name,&e[i].sal);
	}
	//Display Records
	printf("\n Display Records\n");
	for(i=0;i<5;i++)
	{
		printf("\n %d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
	}
	//delete records
	printf("\n Enter id to delete records");
	scanf("%d",&did);
	for(i=0;i<5;i++)
	{
		if(did==e[i].id)
		{
			count++;
			for(j=i;j<5;j++)
			{
				e[j]=e[j+1];
			}
		}
	}
		printf("\n Display Records\n");
	for(i=0;i<5-count;i++)
	{
		printf("\n %d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
	}
	if(count!=0)
	{
		printf("\nRecord Deleted Successfully!!!");
	}
	else
	{
		printf("\nRecord Not Deleted!!!");
	}
}

