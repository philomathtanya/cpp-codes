#include<iostream>
using namespace std;

	int sum(int n)
	{
int t=0;
while(n>0)
{
t=t+n;
n=n-1;
}
return t;
}
   int main()
    {
    	int n;
    	cin>>n;
    	cout<<sum(n);
    	
    	
          	
	}
