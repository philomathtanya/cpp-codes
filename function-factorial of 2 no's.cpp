#include<iostream>
using namespace std;

	int fact(int i)
	{int f=1;
		while(i>0)
		{
		
		f=i*f;
		i=i-1;}
		return f;
		
	}
   int main()
    {
    	int a,b;
    	cin>>a>>b;
    	cout<<fact(a)<<endl;
    	cout<<fact(b);    	
	}
