#include<stdio.h>
struct emp{
	int id;
	char name[20];
	char email[20];
	char phone[10];
	int sal;
	};
int main()
{
	int size,i;
	printf("\n Enter How many Employee You want to store");
	scanf("%d",&size);
	struct emp *e=(struct emp*)malloc(sizeof(struct emp)*size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter Details of Id,Name,Email,phone,Salary of %d Employee",i+1);
		scanf("%d%s%s%s%d",&e[i].id,e[i].name,e[i].email,e[i].phone,&e[i].sal);
	}
	for(i=0;i<size;i++)
	{
		printf("\n%d\t%s\t%s\t%s\t%d",e[i].id,e[i].name,e[i].email,e[i].phone,e[i].sal);
	}
}

