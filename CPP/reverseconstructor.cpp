#include<iostream>
using namespace std;
#include<string.h>
class ReverseApp
{
	public:
		int i,j,temp,len;
		char ch;
	ReverseApp(int a[5])
	{
		for(i=0,j=4;i<=2;i++,j--)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		cout<<"\nReverse Array is\n";
		for(i=0;i<5;i++)
		{
			cout<<"\t"<<a[i];
		}
	}
	ReverseApp(char c[10])
	{
		len=strlen(c);
		cout<<"\nlength of string "<<len;
//		for(i=0;i<len;i++,)
//		{
//		    ch=c[i];
//			c[i]=c[j];
//			c[j]=ch;	
//		}
//		//cout<<"\nReverse String is "<<c;
//			for(i=0;i<len;i++)
//		{
//			cout<<c[i];
//		}
      cout<<"\nLength of String is "<<strrev(c);
	}
};
int main()
{
	int a[5],i;
	char ch[10];
	cout<<"\nEnter Array values";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	ReverseApp r1(a);
	cout<<"\nEnter a string";
	cin>>ch;
	ReverseApp r2(ch);
}
