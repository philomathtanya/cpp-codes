#include<iostream>
using namespace std;

	int fact(int n)
	{
	int f=1;
		while(n>0)
		{
		
		f=n*f;
		n=n-1;
		}
		return f;
	}

   int main()
    {
    	int n,t,r;
    	cin>>n>>r;
        t=fact(n)/(fact(n-r) * fact (r));
        cout<<"ncr is"<<t;   	
	}
