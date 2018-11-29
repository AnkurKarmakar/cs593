#include <iostream>
using namespace std;
template <class X> class Math
{
	private:
		X a,b;
	public:
	Math(){}
	Math(X p, X q)
	{
		a=p;
		b=q;
	}
	void add();
	void multiply();
};
template <class X> void Math<X> :: add()
{
	cout<<a+b<<"\n";
}
template <class X> void Math<X> :: multiply()
{
	cout<<a*b<<"\n";
}
int main()
{
	Math <int> obj(10,20);
	obj.add();
	obj.multiply();
	return 0;
}
