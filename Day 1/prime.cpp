#include <iostream>
#include <string>
using namespace std;
int prime(int n,int i,int k)
{
	if(i>n)
	return k;
	else
	{
		if(n%i==0)
		{
			k++;
		}
		prime(n,i+1,k);
	}	
}	
int main()
{
	int a;
	cin>>a;
	if (prime(a,1,0)==2)
	cout<<"prime";
	else
	cout<<"not prime";
}	
