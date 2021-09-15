#include<iostream>
#include<list>
using namespace std;
int main()
{
	list <int>l1{11,100,34,65,22};
	list<int>:: iterator p=l1.begin();
	while(p!=l1.end())
	{
		cout<<*p;
		p++;
		cout<<endl;
	}
	l1.sort();
	list<int>:: iterator q=l1.begin();
	while(q!=l1.end())
	{
		cout<<*q;
		q++;
		cout<<endl;
	}
}
