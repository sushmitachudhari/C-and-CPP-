#include<stdio.h>// update
struct stud{
	int id;
	char name[10];
	int std;
} s[5];
int main()
{
  int i,sid;
  char sname[10];
  printf("\nEnter Record\nEnter id, name,std");
   for(i=0;i<5;i++)
   {
   	scanf("%d %s %d",&s[i].id,s[i].name,&s[i].std);
   }
   
   //Display Record
   printf("\n Record is\n");
   for(i=0;i<5;i++)
   {
   	printf("\n%d\t%s\t%d",s[i].id,s[i].name,s[i].std);
   }
  	//update logic
  	printf("\nEnter Id to search");
  	scanf("%d",&sid);
  	printf("\nEnter name to change");
  	scanf("%s",&sname);
  	for(i=0;i<5;i++)
  	{
  	   if(s[i].id==sid)
		 {  strcpy(s[i].name,sname);
		    
		}	
	}
	 printf("\n Record is\n");
   for(i=0;i<5;i++)
   {
   	printf("\n%d\t%s\t%d",s[i].id,s[i].name,s[i].std);
   }
}
