#include<iostream>
using namespace std;
void check(int n)
{
	int o=0,z=0;
	while(n>0)
	{
		if(n & 1)
		{
			o++;
		}
		else
		{
			z++;
		}
		n=n>>1;
	}
	
	cout<<"no. of zeroes are:"<<z<<endl;
	cout<<"no.of ones are :"<<o;
	
	}









int main()
{
	int n;
	cin>>n;
	check(n);
	
}
