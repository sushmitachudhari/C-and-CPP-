//vovel consonent count
#include<stdio.h>
#include<string.h>
int main()
{
	int vcount=0,count=0,i;
	char str[10];
	printf("\nEnter String");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' ||s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' ||s[i]=='O' ||s[i]=='U')
		{
			vcount++;
		}
	  else{
		    count++;
	      }
	      i++;
    }
    printf("\nNumber of Vowels %d\nNumber of consonents %d",vcount,count);
}
