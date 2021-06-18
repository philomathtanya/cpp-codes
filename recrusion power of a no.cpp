#include<iostream>
using namespace std;
int power(int b,int p)
{
	if(p==0)
	{
		return 1;
	}
	int ps=power(b,p-1);
	return b* ps;
}







int main()
{
	int b,p;
	cin>>b>>p;
int c=power(b,p);
cout<<c;

}
