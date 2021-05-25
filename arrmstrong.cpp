#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,t,r,s,c,z;
	cin>>n;
	t=n;
z=n;
	c=0;
	while(t>0)
	{
		r=t%10;
		t=t/10;
		c=c+1;
	}
	s=0;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		s=s+(pow(r,c));
	}
if(s==z)
{
	cout<<"armstrong number";
}
else
{
		cout<<"not armstrong number";
}
	
	
}
