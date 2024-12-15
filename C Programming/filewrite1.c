//Write charectors into file
//write in file charector by charector
#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int count=0;
	fp=fopen("C://Users//LENOVO//OneDrive//Desktop//ram.txt","w");
	
	do{
		
		printf("\nEnter a charector");
		scanf("%c",&ch);
		count++;
		_flushall();
		fputc(ch,fp);
      }while(count<10);
}a
