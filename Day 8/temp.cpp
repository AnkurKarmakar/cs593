#include<iostream>
using namespace std;
template <class X> X swap(X a, X b)
{
	X temp = a;
	a = b;
	b = temp;
	cout<<a<<" "<<b<<"\n";
}
int main()
{
	swap(4,5);
	swap(4.5f,5.5f);
}
