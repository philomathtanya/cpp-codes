#include<iostream>
using namespace std;

	int bd(int n)
	{
		int p,b,r;
			p=1,b=0;
	while(n>0)
	{
	r=n%10;
	b=b+r*p;
	n=n/10;
	p=p*2;
	}
	return b;
	}
   int main()
    {
    	int i;;
       cin>>i; 
	   cout<<bd(i);   	
	}
