#include<iostream>
using namespace std;
int main()
{
	int n,b,p,r;
	cin>>n;
	p=1,b=0;
	while(n>0)
	{
	r=n%10;
	b=b+r*p;
	n=n/10;
	p=p*2;
	}
	cout<<b;
}
