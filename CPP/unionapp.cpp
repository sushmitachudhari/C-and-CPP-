#include<iostream>
using namespace std;
class unionApp
{
	public:
		int c[10],k,i,j,count;
  unionApp( int x[5])
  {//mejority
  count=0;
  	for(i=0;i<5;i++)
  	{count=0;
  		for(j=0;j<5;j++)
  		{
  			if(x[i]==x[j])
  			{
  				count++;
			}
		}
	  }
	  if(count>2)
	  {
	  	cout<<"\nArray is Mejority Array";
	  }
  }	
  unionApp(int a[5],int b[5])
  {
  	
  }
};
int main()
{
	int a[5],b[5],i;
	
	cout<<"\nEnter First array Elements";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter Second array Elements";
	for(i=0;i<5;i++)
	{
		cin>>b[i];
	}
	unionApp u1(a);
//	unionApp u2(a,b);
}
