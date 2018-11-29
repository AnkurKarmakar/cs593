#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
                a=a+b;
                b=a-b;
                a=a-b;
                cout<<"\n"<<a<<" "<<b;
}
int main()
{
                int x,y;
                cout<<"enter the two numbers= ";
                cin>>x>>y;
                swap(x,y);
}
