#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"Enter the length:";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int s=0;
for(int i=0;i<n;i++)
	for(int j=i;j<n;j++)
	{
		for(int k=i;k<=j;k++)
	{
	s=s+arr[k];
	}
	}
cout<<"The sum of all subarrays is: "<<s;	
		
}
