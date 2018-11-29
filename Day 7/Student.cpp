#include<iostream>
using namespace std;
class Student
{
	public:
	int roll;
	void inputRoll()
	{
		cout<<"Enter the roll no= ";
		cin>>roll;
	}
};
class Test: public Student
{
	public:
	int sub1,sub2;
	void inputMarks()
	{
		cout<<"Enter the marks in two subjects= ";
		cin>>sub1>>sub2;
	}
};
class Result : public Test
{
	public:
	void display()
	{
		cout<<"Roll no= "<<roll<<"\n";
		cout<<"Total marks obtained= "<<sub1+sub2<<"\n";
	}
};
int main()
{
	Result a;
	a.inputRoll();
	a.inputMarks();
	a.display();
}
