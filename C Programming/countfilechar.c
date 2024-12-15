//count number of charectors are presents
#include<stdio.h>
int main()
{
	FILE *fp;
	int count=0;
	char ch;
	fp=fopen("C://Users//LENOVO//OneDrive//Desktop//xyz.txt","r");
	if(fp==NULL)
	{
		printf("\nFile is not available");
	}
	else
	{
		 while((ch=fgetc(fp))!=EOF)
		 {
		 	printf("%c",ch);
		 	count++;
		 }
		 printf("\nTotal number of charectors are %d",count);
	}
}
