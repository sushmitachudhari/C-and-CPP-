// program for string sorting
#include<stdio.h>
#include<string.h>
int main()
{
	char str[30],temp;
	int i,len,j;
	
	printf("\nEnter String ");
	gets(str);
	len=strlen(str);
	printf("\nLenth of string is %d",len);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	
	printf("\n String is %s",str);
	
}
