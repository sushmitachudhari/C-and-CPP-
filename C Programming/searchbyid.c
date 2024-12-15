//search
#include<stdio.h>
int main()
{
	struct emp{
		int id;
		char name[10];
		int sal;
	};
	struct emp e[3];
	int i,index ,sid,choice,flag=1;
	char ch;
	char sname[10];
	printf("\nEnter Id name and Salary of  3 Employees");
	for(i=0;i<3;i++)
	{
		scanf("%d%s%d",&e[i].id,e[i].name,&e[i].sal);
	}
	printf("\nRecords of Employee");
	for(i=0;i<3;i++)
	{
		printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
	}
	do{
	
		printf("\nEnter  from below\n1.Search by Id\n2.Search by name");
    	scanf("%d",&choice);
    	switch(choice)
    	{
    		case 1: printf("Enter Id to search");
    	         scanf("%d",&sid);
    	         for(i=0;i<3;i++)
    	         {
    	         	if(e[i].id==sid)
    	         	{
    	         		printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
					}
					else{
						flag=0;
					} 
				 }
				 if(flag==0)
				 {
				 	printf("\nID Not found");
				 }
				break;
			case 2: printf("Enter name to search");
    	         scanf("%s",&sname);
    	         flag=1;
    	         for(i=0;i<3;i++)
    	         {
    	         	if(strcmp(e[i].name,sname)==0)
    	         	{
    	         		index=i;
					}
	             }	printf("\n%d\t%s\t%d",e[index].id,e[index].name,e[index].sal);	
				 break;	 
	    }
	    _flushall();
	    printf("\nDo you want to continue(Y/N)?");
	    scanf("%c",&ch);
    }while(ch=='y'|| ch=='Y');
}
