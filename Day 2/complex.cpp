#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class Complex
{
	private:
		float x,y;
	public:
	void set(float a,float b)
	{
		x=a;
		y=b;
	}
	void get()
	{
		float q,w;
		cout<<"enter the values of x and y\n";
		cin>>q;
		cin>>w;
		set(q,w);
	}
	void sum(Complex a,Complex b)
	{
		double x_sum=a.x+b.x;
		double y_sum=a.y+b.y;
		cout<<"the sum of two complex numbers=\n";
		cout<<x_sum<<"+ i"<<y_sum<<"\n";
	}
};
int main()
{
	Complex c1,c2;
	c1.get();
	c2.get();
	c1.sum(c1,c2);
}
