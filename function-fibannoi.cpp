#include<iostream>
using namespace std;

	int fib(int n)
	{
	int	a=0,b=1,c=a+b;
	cout<<a<<b;
	for(int j=1;j<=n-2;j++)
	{
		cout<<c;
		a=b;
		b=c;
		c=a+b;
	}
}
   int main()
    {
    	int n;
    	cin>>n;
    	fib(n);
        return 0;   	
	}
