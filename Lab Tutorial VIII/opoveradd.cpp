#include<iostream>
using namespace std;

class complex {
	public:
		int r,i;
		
		complex()
		{
			r=0;
			i=0;
		}
		
		complex(int x, int y)
		{
			r=x;
			i=y;
		}
		
		void print()
		{
			cout<<r<<" + "<<i<<"i"<<endl;
		}
		
		complex operator+(complex const &obj)
		{
			complex res;
			res.r=r+obj.r;
			res.i=i+obj.i;
			return res;
			
		}
};

int main()
{
	int fr,fl,sr,si;
	cout<<"--------------------\nFirst Complex Number\n--------------------\n";
	cout<<"Real part: ";
	cin>>fr;
	cout<<"Imaginary part: ";
	cin>>fl;
	cout<<endl<<"---------------------\nSecond Complex Number\n---------------------\n";
	cout<<"Real part: ";
	cin>>sr;
	cout<<"Imaginary part: ";
	cin>>si;
	cout<<endl<<"----------------------\nSum of Complex Numbers\n----------------------\n";
	 
	complex a(fr,fl),b(sr,si),c;
	c=a+b;
	c.print();
}
