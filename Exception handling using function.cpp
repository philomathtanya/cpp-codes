#include<iostream>
using namespace std;
void fun()
{
	throw 10;
}
int main()
{
	cout<<"First line";
	try{
			fun();
		cout<<"\nhello";
	
	}
	catch(int b){
		cout<<"\nException number is:"<<b;
	}
}

