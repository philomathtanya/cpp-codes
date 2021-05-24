#include<iostream>
using namespace std;
int main()
{
	int f,n;
	f=1;
	cin>>n;
	while(n>0)
	{
		f=f*n;
		n=n-1;
	}
	cout<<f;
}
