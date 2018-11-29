#include<iostream>
using namespace std;
class B;
class A
{
    private:
        int a=5;
        
        friend void sum(A,B);
};
class B
{
    private:
        int b=10;
        
        friend void sum(A,B);
};
void sum(A y,B z)
{
    
    cout<<"sum="<<y.a+z.b;
}
int main()
{
    A obj1;B obj2;
    sum(obj1,obj2);
}
