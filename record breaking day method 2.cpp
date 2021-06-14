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
int c=0;
int m=arr[0];
for(int i=0;i<n;i++)
{
if(i==0)
{
	if(arr[i]>arr[i+1])
	c=c+1;
}
else if((arr[i]>m)&&(arr[i]>arr[i+1]))
	{
		m=arr[i];
		c=c+1;
	}
	

}
cout<<c;
}
