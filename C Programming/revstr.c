//reverse string
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,len=0;
	char ch,str[20];
	printf("\nEnter String");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	for(i=0,j=len-1;i<len/2;i++,j--)
	{
		ch=str[i];
		str[i]=str[j];
		str[j]=ch;
	}
	printf("\nString Reverse is %s",str);
}
