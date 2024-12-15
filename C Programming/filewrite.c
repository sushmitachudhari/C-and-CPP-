//to read in file
#include<stdio.h>

int main()
{
	FILE *fp;
	char ch;
	fp=fopen("C://Users//LENOVO//OneDrive//Desktop//xyz.txt","r");
	if(fp==NULL)
	{
		printf("\nFile is not Available");
	}
	else
	{
	 while((ch=fgetc(fp))!=EOF)
	 {
	 //	fread(ch,10,1,fp);
	    printf("%c",ch);
	 }
	}
}
