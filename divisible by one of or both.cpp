#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%2==0 && n%3==0)
	{
		cout<<"it is both divisible by both 2 and 3";
		
	}
	else if (n%2==0 || n%3==0)
	{
		cout<<"it is divisible by one of them";
	}

}
