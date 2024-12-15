#include<iostream>
using namespace std;
class occurance
{
  public:
  	int ecount,ocount,i,vcount,count;
  	
  occurance(int a[5])
  {
    //count even and odd
    ecount=0,ocount=0;
    
	for(i=0;i<5;i++)
	{
	  if(a[i]%2==0)
	  {
	  	ecount++;
	  }	
	  else
	  {
	  	ocount++;
	  }
	}	
	for(i=0;i<5;i++)
	{
		cout<<"\t"<<a[i];
	}
	cout<<"\n Even Count="<<ecount<<"\nOdd Count="<<ocount;
  }	
  o
  ccurance(char str[10])
  {
  	vcount=0,count=0;
  	//count vowel and consonent
  	for(i=0;str[i]!='\0';i++)
	{
	  if(str[i]=='a' ||str[i]=='e'|| str[i]=='i' ||str[i]=='o' || str[i]=='u' || str[i]=='A' ||str[i]=='E'|| str[i]=='I' ||str[i]=='O' || str[i]=='U')
	  {
	  	vcount++;
	  }	
	  else
	  {
	  	count++;
	  }
	}
	cout<<"\nVowel count"<<vcount<<"\nConsonent count"<<count;
  }
};
int main()
{
	int a[5],i;
	char str[10];
	cout<<"\nEnter Array Elements";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter string";
	cin>>str;
	occurance o1(a);
	occurance o2(str);
}
