/*Create a base class called shape and derive the classes box,
cube and cylinder from it. The class shape have functions
volume () and whole_surface_area(). Override these two
functions in each of the derived classes. The dimensions of the
shapes (box, cube, cylinder) are to be taken from the user. Write
a main function to calculate the volume and area of the
box ,cube and cylinder.*/
#include<iostream>
using namespace std;
class shape
{
	public:
	void volume(){}
	void whole_surface_area(){}
};
class box : public shape
{
	public:
	float l,b,h;
	void getBox()
	{
		cout<<"enter the length, breadth and height= ";
		cin>>l>>b>>h;
	}
	void whole_surface_area()
	{
		cout<<"the surface area of box= ";
		cout<<2*(l*b+b*h+h*l)<<"\n";
	}
	void volume()
	{
		cout<<"Volume of the box= ";
		cout<<l*b*h<<"\n";
	}
};
class cube : public shape
{
	public:
	float a;
	void getcube()
	{
		cout<<"enter the side of cube= ";
		cin>>a;
	}
	void whole_surface_area()
	{
		cout<<"the surface area of cube= ";
		cout<<6*a*a<<"\n";
	}
	void volume()
	{
		cout<<"Volume of the cube= ";
		cout<<a*a*a<<"\n";
	}
};
class cylinder : public shape
{
	public:
	float l,r;
	void getCy()
	{
		cout<<"enter the length and radius of the cylinder= ";
		cin>>l>>r;
	}
	void whole_surface_area()
	{
		cout<<"the surface area of cylinder= ";
		cout<<2*3.14*r*r+2*3.14*r*l<<"\n";
	}
	void volume()
	{
		cout<<"Volume of the cylinder= ";
		cout<<3.14*r*r*l<<"\n";
	}
};
int main()
{
	box b;cube c;cylinder cy;
	b.getBox();
	c.getcube();
	cy.getCy();
	
	b.whole_surface_area();
	b.volume();
	
	
	c.whole_surface_area();
	c.volume();
	
	
	cy.whole_surface_area();
	cy.volume();
}
