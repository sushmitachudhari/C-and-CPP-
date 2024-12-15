//find length of string
#include<stdio.h>
#include<string.h>
int main()
{
	int i,len=0;
	char str[10];
	printf("\nEnter String");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		i++;
		len++;
	}
	printf("\nLength of %s is %d ",str,len);
}
