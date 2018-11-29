#include<iostream>
#include<string>
using namespace std;
struct employee
{
	string name;
	int age;
	string designation;
	double salary;
}arr[3];

int main()
{
	for(int i=0;i<3;i++)
	{
		cout<<"enter the name of the employee, age, designation, salary= ";
		cin>>arr[i].name;
		cin>>arr[i].age;
		cin>>arr[i].designation;
		cin>>arr[i].salary;
	}
	for(int i=0;i<3;i++)
	{
		cout<<"the name of the employee, age, designation, salary= ";
		cout<<arr[i].name;
		cout<<arr[i].age;
		cout<<arr[i].designation;
		cout<<arr[i].salary;
		cout<<"\n";
	}
}
