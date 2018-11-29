#include <iostream>
#include <string>
using namespace std;
string pattern(int n)
{
	if(n==1)
	return "*!";
	else
	return("*" + pattern(n-1) + "!");
}
int main()
{
	int a;
	cin>>a;
	cout<<pattern(a);
}	
