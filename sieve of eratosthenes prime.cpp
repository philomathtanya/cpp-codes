#include<iostream>
using namespace std;
int main()
{
	int n,num;
	cin>>num;
	n=num+1;
int arr[num]={0};
for(int i=2;i<n;i++)
{
	for(int j=i*i;j<n;j+=i)
	{
		arr[j-1]=1;
	}
}
for(int i=1;i<n;i++)
{
	if(arr[i-1]==0)
	cout<<i<<"\t";
}
}
