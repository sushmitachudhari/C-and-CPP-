#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("C://Users//LENOVO//OneDrive//Desktop//aaa.txt","r");
	
	if(fp==NULL)
	{
		printf("File is not available");
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			printf("%c",ch);
		}
	}
}
