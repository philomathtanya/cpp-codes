#include<iostream>
using namespace std;
int count(int n,int i,int j)
{
	if(i==n-1 || j==n-1)
	{
		return 1;
	}
	if(i>n || j>n)
	{
		return 0;
	}        
	return count(n,i+1,j) + count(n,i,j+1);
}
int main()
{
	int n;
	cin>>n;//3
cout<<	count(n,0,0);
}
