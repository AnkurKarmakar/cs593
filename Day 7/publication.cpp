#include<iostream>
#include<string.h>
using namespace std;

//base class publication 
class publication{
	private:
	string name;
	double price;
	
	
	public:
	/*publication(string n, double m_price){
	name = n ; 
	price = m_price;
	}
	*/
	void getdata(){
	cout << "Name : " << name  <<" Price : " <<price ; 
	}
	
	void putdata(string n ,double p ){
	name =n;
	price = p; 
	}
	

};

class tape :public publication
{
private : 
	int playtime;
public :
	tape(string n, double pri, int p){
	publication::putdata(n,pri);
	playtime=p;
	}
	void getdata(){
	publication::getdata();
	cout << "playtime : " <<playtime <<endl ; 
	}
	
	void putdata(string n ,double p ,int x ){
	publication::putdata(n,p);
	playtime = x;
	}
	
	


};


class book :public publication
{
private : 
	int count;
public :
	book(string n, double pri, int p){
	publication::putdata(n,pri);
	count=p;
	}
	void getdata(){
	publication::getdata();
	cout << "count: " <<count << endl; 
	}
	
	void putdata(string n ,double p ,int x ){
	publication::putdata(n,p);
	count = x;
	}
	
	


};



int main()
{

string name ;
double pri;
int n;
cout<<"Enter name , price , count or playtime";
cin>>name>>pri>>n; 
tape t(name,pri,n);
cout<<"Enter name , price , count or playtime";
cin>>name>>pri>>n;
book b(name,pri,n); 

t.getdata();

b.getdata();



return 0;
}
