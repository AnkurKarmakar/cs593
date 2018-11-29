#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class Batsman
{
	private:
		string name;int runs;int sixes;int fours;
	
	public:
		void initialize(string n)
		{
			name = n;
			sixes = 0;
			fours = 0;
			runs = 0;
		}
		void show()
		{
			cout<<"Name of Batsman: "<<name<<"\n";
			cout<<"No of runs scored: "<<runs<<"\n";
			cout<<"No of fours: "<<fours<<"\n";
			cout<<"No of sixes: "<<sixes<<"\n";
			exit(0);
		}
		void update(string s,int r)
		{
			if(s=="out")
				show();
			else
			{
				runs=runs+r;
				if(r == 4)
					fours++;
				if(r == 6)
					sixes++;
			}
		}
};
int main()
{
	Batsman b;string z;string y;int u;
		cout<<"enter the name of the batsman :";
	cin>>y;
	b.initialize(y);
	while(1)
	{	
		
		cout<<"enter whether out or not out : \n";
		cin>>z;
		
		if(z!="out")
		{
			cout<<"enter number of runs per ball : \n";
			cin>>u;
		}
		b.update(z,u);
	}
}
