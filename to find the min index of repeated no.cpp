#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the n:";
	int n;
	cin>>n;
	int arr[n],i,min,c,k;
	for(i=0;i<n;i++)
	cin>>arr[i];
	min=0;
	c=1;
	for(i=0;i<=n-2;i++)
	{
		for(int j=i+1;j<=n-1;j++)
		{
		if(arr[i]==arr[j])
		{
		
			c=c+1;
		}
	}
    
    if(c>1 && c>min)
    {
    	min=c;
    	k=i;
    	c=0;
	}}
	cout<<min;
	cout<<k;
}
