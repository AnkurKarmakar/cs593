#include<iostream>
using namespace std;
template <class X> X sort(X arr[], X l, X h)
{
	for(X i = l; i < h ; i++)
	{
		for(X j = l; j < h - i - 1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				X temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(X i=l; i<h; i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[]={1,5,3,4,2};
	sort(arr,0,5);
}
