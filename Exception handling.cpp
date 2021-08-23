#include<iostream>
using namespace std;
int main()
{
	cout<<"First line";
	try{
		cout<<"\nhello";
		throw 5;
	}
	catch(int a){
		cout<<"\nException number is:"<<a;
	}
}

#include<iostream>
using namespace std;
int main()
{
	cout<<"First line";
	try{
		throw 5;//it directly throw 5 to catch
		cout<<"\nhello";//this command will not print.....
	}
	catch(int a){
		cout<<"\nException number is:"<<a;
	}
}
