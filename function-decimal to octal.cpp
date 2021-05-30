#include<iostream>
using namespace std;

	int db(int n)
	{
		int p=1,b=0,r;
	
	while(n>0)
	{
	r=n%8;
	b=b+r*p;
	n=n/8;
	p=p*10;
	}
	return b;
	}
   int main()
    {
    	int i;;
       cin>>i; 
	   cout<<db(i);   	
	}
