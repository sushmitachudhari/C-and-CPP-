//wap to copy text from one file to another
#include<stdio.h>
int main()
{
	FILE *fp,*fp1;
	char ch;
	fp=fopen("C://Users//LENOVO//OneDrive//Desktop//ram.txt","r");
	fp1=fopen("C://Users//LENOVO//OneDrive//Desktop//xyz.txt","w");
	if(fp==NULL)
	{
		printf("\nFile is not Available");
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			fputc(ch,fp1);
		}
		printf("\nText is copied");
	}
	
}
