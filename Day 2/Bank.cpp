#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class Bank
{
	private:
		string name;
		long acc_no;
		string acc_type;
		double amount;
	
	public:
		void initialize(string n,long r,string type)
		{
			name = n;
			acc_no = r;
			acc_type = type;
			amount = 5000;//minimum balance required for opening an account
		}
		void withdraw(double a)
		{
			amount-=a;
		
		}
		
		void deposit(double a)
		{
			amount+=a;
		
		}
		
		void show()
		{
			cout<<"Name of the customer:  "<<name<<"\n";
			cout<<"Account Type:  "<<acc_type<<"\n";
			cout<<"Account No:  "<<acc_no<<"\n";
			cout<<"Amount:  "<<amount<<"\n";
		}
};
int main()
{
	Bank bn;string a;long b;string c;string z;double am;double am2;
	cout<<"Enter the name: ";
	cin>>a;
	cout<<"Enter the account type:  ";
	cin>>c;
	cout<<"Enter the account no  ";
	cin>>b;
	bn.initialize(a,b,c);
	cout<<"Enter withdraw or deposit  ";
	cin>>z;
	if(z=="withdraw")
	{
		cout<<"enter the amount to witdraw  ";
		cin>>am;
		bn.withdraw(am);
		cout<<"\n";
		bn.show();
	}
	if(z=="deposit")
	{
		cout<<"enter the amount to deposit  ";
		cin>>am2;
		bn.deposit(am2);
		cout<<"\n";
		bn.show();
	
	}
}
