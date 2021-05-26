#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n;
	a=0,b=1,c=a+b;
	cout<<a<<b;
	for(int i=1;i<=n-2;i++)
	{
		cout<<c;
		a=b;
		b=c;
		c=a+b;
	}
}
