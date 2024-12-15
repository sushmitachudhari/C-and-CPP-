//check whether string is palindrome
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,len=0,flag=0;
	char str1[20];
	printf("\nEnter string");
	gets(str1);
	
	i=0;
	while(str1[i]!='\0')
	{
		len++;
		i++;
	}
	for(i=0,j=len-1;i<len/2;i++,j--)
	{
		if(str1[i]!=str1[j])
		{
			flag=1;
			break;
		}
	}
	 if(flag==0)
	 {
	 	printf("\n%s is palindrome",str1);
	 }
	 else
	    printf("\n %s is not palindrome",str1);
}
