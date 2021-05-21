#include<iostream>
using namespace std;
int main()
{
	int n,c,i;
	cin>>n;
	c=0;
	for (i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			c=c+1;
		}
		else
		continue;
	}
	if(c==1)
	{
	cout<<"no is prime";	
	}
	else
	{
		cout<<"no is not prime";	
	}
}
