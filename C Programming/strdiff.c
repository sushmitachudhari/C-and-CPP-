//program to  check greater string
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int len1,len2,i,x,diff;
	printf("\nEnter string1");
	gets(str1);
	printf("\nEnter string2");
	gets(str2);
	i=0;
	while(str1[i]!='\0')
	{
		len1++;
		i++;
	}
		i=0;
	while(str2[i]!='\0')
	{
		len2++;
		i++;
	}
	printf("\n length1 =%d\n Length2=%d ",len1,len2);
	if(len1>len2)
	{
		x=len1;
	}
	else
	{
		x=len2;
	}
	 for(i=0;i<x;i++)
	 {
	 	diff=str1[i]-str2[i];
	 }
	 if(diff>0)
	 {
	 	printf("\n%s is greater",str1);
	 }
	 else if(diff<0)
	 {
	 	printf("\n%s is greater",str2);
	 }
	 else
	 {
	 	printf("\nBoth strings are equal %s == %s",str1,str2);
	 }
}
