#include<iostream>
using namespace std;
int max(int arr[],int n)
{

int mx;
mx=arr[0];
for(int i=0;i<n;i++)
{
if(arr[i]>mx)
mx=arr[i];	
}
return mx;
}
int min(int arr[],int n)
{

int mn;
mn=arr[0];
for(int i=0;i<n;i++)
{
if(arr[i]<mn)
mn=arr[i];	
}
return mn;
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
cout<<max(arr,n)<<endl;
cout<<min(arr,n);
}
	
