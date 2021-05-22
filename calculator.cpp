#include<iostream>
using namespace std;
int main()
{
	char a;
		cin>>a;
	int n1,n2;
	cin>>n1>>n2;
	switch(a)		{
		case'+':
		   cout<<n1+n2;
		   break;
		case '-':
		   cout<<n1-n2;
		   break;
		case '*':
		   cout<<n1*n2;
		   break;
		case '/':
		   cout<<n1/n2;
		   break;
	}
		   
			
}
