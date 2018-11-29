#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;int i;int vowels=0;int consonants=0;int spaces=0;
	getline(cin,a);
	for(i=0;i<a.length();i++)
	{
	 	if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		vowels++;
		
		else if(a[i]==' ')
		spaces++;
		
		else
		consonants++;
	}
	cout<<"no of vowels "<<vowels<<"\n"<<"no of consonants "<<consonants<<"\n"<<"no of spaces "<<spaces<<"\n";
}	
