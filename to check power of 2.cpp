#include<iostream>
using namespace std;
bool powerof2(int n)
{
	return (n && !(n & n-1));
}
int main()
{
	int n;
	cin>>n;
	int c=powerof2(n);
	//cout<<c;
	if(c==0)
	{
		cout<<n<<" is Not a power of 2!!!"<<endl;
	}
	else
	{
		cout<<n<<" is the power of 2";
	}
}
