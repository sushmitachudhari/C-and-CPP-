//structure program search using name
#include<stdio.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
	}e[5];
	int i,j,count=0,index=0;
	char sname[10];
	printf("\nEnter Records of 5 employee");
	for(i=0;i<5;i++)
	{
		scanf("%d %s %d",&e[i].id,e[i].name,&e[i].sal);
	}
	//Display Records
	printf("\n Records are");
	for(i=0;i<5;i++)
	{
		printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
	}
	printf("\nEnter name to search");
	scanf("%s",&sname);
	for(i=0;i<5;i++)
	{
		if(strcmp(e[i].name,sname)==0)
		{    count++;
			 for(j=i;j<5;j++)
			 {
			 	e[j]=e[j+1];
			 }
		}
	}
	if(count!=0)
	{
		printf("\nRecord is found and DELETED Succesfully\n");
	}
	else{
		printf("\nSORRY Record not found !!!\n");
	}
	printf("\nRecord is\n");
		for(i=0;i<5-count;i++)
	{
		printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
	}
}
