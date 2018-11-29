#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;int i;
	cout<<"enter the value of n: ";
	cin>>n;
	string arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				string tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
