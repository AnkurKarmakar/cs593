#include<iostream>
using namespace std;
class Base1
{
	public:
	void show()
	{
		cout<<"This is Base 1";
	}
};

class Base2
{
	public:
	void show()
	{
		cout<<"This is base 2";
	}
};

class derived : public Base1, public Base2
{
	public:
	void display()
	{
		cout<<"This is derived";
	}
};

int main()
{
	derived d;
	//d.show();
	//d.show();
	d.Base1 :: show();
	d.Base2 :: show();
	d.display();
}
