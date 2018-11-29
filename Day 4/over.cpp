#include<iostream>
using namespace std;
class Box
{
	public:
	int l, b, h;
	void set(int a, int d, int c)
	{
		l = a; b = d; h = c;
	}
	void display()
	{
		cout<<l<<" ";
		cout<<b<<" ";
		cout<<h<<" "<<"\n";
	}
	void operator ++ ()
	{
		l = l + 1;
		b = b + 1;
		h = h + 1;
	}
};
int main()
{
	Box ob;
	ob.set(1,2,3);
	ob.display();
	++ob;
	ob.display();
}
