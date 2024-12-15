#include<iostream>
using namespace std;
class Area
{
	public:
		Area(int r)
		{
			 cout<<"Area of circle="<<3.14*r*r;
		}
		Area(int b ,int l)
		{  
		    cout<<"Area of Rectangle="<<l*b;	
		}
		Area(float b,float h)
		{
			cout<<"Area of tringle"<<0.5*b*h;
		}
};
int main()
{
	int r,bd,l;
	float b,h;
	cout<<"\nEnter radius";
	cin>>r;
	cout<<"\nArea of Circle is ";
	Area a(r);
	cout<<"\nEnter length and Breadth";
	cin>>l>>bd;
	cout<<"\nArea of Rectangle";
	Area a1(bd,l);
	cout<<"\nEnter base and height";
	cin>>b>>h;
	cout<<"\nArea of Tringle";
	Area a2(b,h);
}
