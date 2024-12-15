//write string into file
#include<stdio.h>
int main()
{
	FILE *fp;
	char ch[100];
	fp=fopen("C://Users//LENOVO//OneDrive//Desktop//ram.txt","w");
	printf("\nEnter String to write into file");
	gets(ch);
	fputs(ch,fp);
	
}

