#include<iostream>
using namespace std;
int find(int b,int i)
{
	int ls,ad;
	ls=1<<i;
	ad=ls & b;
	if((ls & b)!=0)
	{
		cout<<"bit is 1";
	}
	else
	cout<<"bit is 0";
	
	
	
	
	
}
int main()
{
int b,c,i;
cout<<"Enter Binary number:";
	cin>>b;
	cin>>i;
find(b,i);
}






































