#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str,s1;
	cout<<"Enter the String:";
	getline(cin,str);
	cout<<"Enter the Substring:"<<endl;
	getline(cin,s1);
	cout<<"the substring is at:"<<endl<<str.find(s1);
	
	
}
