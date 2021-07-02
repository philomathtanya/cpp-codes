#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"Enter the length:";
cin>>n;
char arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int s=0;
cout<<"{}"<<endl;
for(int i=0;i<n;i++)
{

	for(int j=i;j<n;j++)
	{
		cout<<"{";
		for(int k=i;k<=j;k++)
	{
		cout<<arr[k]<<" ";
	}
	cout<<"}";
	cout<<endl;
}
}

		
}
