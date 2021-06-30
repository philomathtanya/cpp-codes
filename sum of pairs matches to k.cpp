#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}

int k;
cout<<"enter the number to make equal to sum of pairs";
cin>>k;
for(int i=0;i<n;i++)
{

for(int j=i+1;j<n;j++)
{
if(arr[i]+arr[j]==k)
{
	cout<<"it matched,values are:"<<arr[i]<<","<<arr[j];
}

}	
}

}
