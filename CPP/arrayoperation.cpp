//sort array and mearge
#include<iostream>
using namespace std;
class arrayoperation
{
	public:
		int i,j,c[10],k,temp;
		arrayoperation(int x[5]) 
		{
			//ascending sorting
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(x[i]>x[j])
					{
						temp=x[i];
						x[i]=x[j];
						x[j]=temp;
					}
				}
			}
			cout<<"\nAscending sorting is\n";
			for(i=0;i<5;i++)
			{
				cout<<"\t"<<x[i];
			}
			
			//Descinding Sorting
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(x[i]<x[j])
					{
						temp=x[i];
						x[i]=x[j];
						x[j]=temp;
					}
				}
			}
			cout<<"\nDescinding sorting is\n";
			for(i=0;i<5;i++)
			{
				cout<<"\t"<<x[i];
			}
			
		}
};
int main()
{
	int a[5],i,b[5];
	cout<<"\nEnter Array Elements:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter Array Elements:";
	for(i=0;i<5;i++)
	{
		cin>>b[i];
	}
	arrayoperation a1(a);
}
