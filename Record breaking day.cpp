#include<iostream>
using namespace std;
int main()
{

int n,count=0;
cout<<"Enter the length:";
cin>>n;
int arr[n+1];
for(int i=0;i<n;i++)
cin>>arr[i];
int s=0,x=-1;
for(int i=0;i<n;i++)
{


	if(arr[i]>x && arr[i]>arr[i+1])
	{
	count=count+1;

	}
	x=max(x,arr[i]);
	
}
cout<<"the count = "<<count;
}
