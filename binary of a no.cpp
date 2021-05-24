#include<iostream>
using namespace std;
int main()
{
	int n,b,i,p,r;
	cin>>n;
	b=0,p=1;
while(n>0)
{
	r=n%2;
	b=b+r*p;
	n=n/2;
	p=p*10;
		
	}
	cout<<b;
}
