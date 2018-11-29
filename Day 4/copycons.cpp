#include <iostream>
using namespace std;
class A
{
	public:
	int a = 0,b = 0,c = 0;
	A()
	{
		a = 0;
		b = 0;
		c = 0;
	}
	A(int x)
	{
		a = x;
	}
	A(int x, int y)
	{
		a = x;
		b = y;
	}
	A(int x, int y, int z)
	{
		a = x;
		b = y;
		c = z;
	}
	~A()
	{
		cout<<"destructor called!! \n";
	}
	void display()
	{
		cout<<a<<"\n";
		cout<<b<<"\n";
		cout<<c<<"\n";
	}
};
int main()
{
	A a1, a2(1), a3(2, 3), a4(4, 5, 6);
	A a5 = a4;
	cout<<"A() \n";
	a1.display();
	cout<<"A(1) \n";
	a2.display();
	cout<<"A(2,3) \n";
	a3.display();
	cout<<"A(4,5,6) \n";
	a4.display();
	cout<<"copy of A(4,5,6) \n";
	a5.display();
	{
		cout<<"entering block \n";
		A a6(7,8,9);
		cout<<"block: \n";
		a6.display();
	}
}
