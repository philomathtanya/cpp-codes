#include<iostream>
using namespace std;
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	int ps=sum(n-1);
	return n+ ps;
}







int main()
{
	int n;
	cin>>n;
int c=	sum(n);
cout<<c;

}
