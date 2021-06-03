#include<iostream>
using namespace std;
int ls(int arr[],int k,int n)
{
	
    for (int i=0;i<n;i++)
    {
	
		if(arr[i]==k)
		return i;
	}
		return -1;
}
int main()
{
int n;
	cin>>n;
	int arr[n],k;

	
		for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>k;
	cout<<ls(arr,k,n);
}
	
