#include<iostream>
using namespace std;
class A
{
                private:
                                int a, b;
                public:
                                A(int x, int y)
                                {
                                                cout<<"Addition of two numbers=";
                                                cout<<x+y<<"\n";
                                }
                                A(float x,int y)
                                {
                                                cout<<"Multiplication of two numbers=";
                                                cout<<x*y<<"\n";
                                }
                                A(int x,float y)
                                {
                                                cout<<"Subtraction of two numbers=";
                                                cout<<x-y<<"\n";
                                }
                                A(float x,float y)
                                {
                                                cout<<"Division of two numbers=";
                                                cout<<x/y<<"\n";
                                }
};
int main()
{
                A obj(1,2);
                A obj1(2.0f,4);
                A obj2(8,4.0f);
                A obj3(4.0f,4.0f);
}
