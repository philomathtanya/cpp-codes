#include<iostream>
using namespace std;
int main()
{

int n,sum;
cout<<"Enter the length:";
cin>>n;
cout<<"Enter the sum:";
cin>>sum;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int s=0,t=0;
for(int i=0;i<n;i++)
{

	for(int j=i;j<n;j++)
	{
		for(int k=i;k<=j;k++)
	{
	s=arr[i]+arr[j]+arr[k];
	//cout<<s<<endl;
	if(sum==s)
	{
		cout<<"positions from :"<<i <<"to "<<j <<endl;
		t=1;
		break;
	
	}
	s=0;
	}
		if(t==1)
	{
		break;
	}		
}
	if(t==1)
	{
		break;
	}





}}
