#include<iostream>
using namespace std;
class B;
class A
{
    private:
        int a=5;
        
        friend void swap(A &,B &);
};
class B
{
    private:
        int b=10;
        
        friend void swap(A &,B &);
};
void swap(A &y,B &z)
{
    y.a=y.a+z.b;
    z.b=y.a-z.b;
    y.a=y.a-z.b;
    cout<<y.a<<" "<<z.b;
}
int main()
{
    A obj1;B obj2;
    swap(obj1,obj2);
}
