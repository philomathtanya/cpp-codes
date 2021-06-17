#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	int ps=fact (n-1);
	return n* ps;
}







int main()
{
	int n;
	cin>>n;
int c=fact(n);
cout<<c;

}
