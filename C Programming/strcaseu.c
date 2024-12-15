//convert lower case to uppercase
#include<stdio.h>
#include<string.h>
int main()
{
	int i,len=0;
	char str[20];
	printf("Enter String");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
	i++;
	len++;
	}
	printf("\nNumber of length is %d",len);
	for(i=0;i<len;i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
		
	}
	printf("\n String after case conversion %s",str);
}
