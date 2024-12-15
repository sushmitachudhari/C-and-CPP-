#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("C://Users//LENOVO//OneDrive//Desktop//ram.txt","r");
	
	if(fp==NULL)
	{
		printf("\nFile is not Available");
	}
	else
	{ _flushall();
	   while((ch=fgetc(fp))!=EOF)
       {
     
       	printf("%s",ch);	
	   }
	  
	}
}
