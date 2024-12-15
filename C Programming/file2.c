#include<stdio.h>
int main()
{
	FILE *fp;
	char ch[10];
	fp=fopen("C://Users//LENOVO//OneDrive//Desktop//xyz.txt","r");
	if(fp==NULL)
	{
		printf("\nFile is not available");
	}
	else
	{
//		 while((ch=fgetc(fp))!=EOF)
//		 {
//		 	printf("%c",ch);
//		 }
        while(!feof(fp))
        {
        	fread(ch,10,1,fp);
        	printf("\n%s",ch);
		}
	}
}
