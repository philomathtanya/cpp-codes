#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	//for lower to upper
	string str;
	cout<<"Enter the string in Lower case: ";
	getline(cin,str);
	cout<<"Before-"<<str<<endl;
	//transform(str.begin(),str.end(),str.begin(),::toupper);
	for(int i=0;i<=str.size();i++)
	{
		str[i]=str[i]-32;
	}
	cout<<"After: "<<str<<endl;
	
	//for upper tu lower
		string str1;
	cout<<"Enter the string in Upper case: ";
	getline(cin,str1);
	cout<<"Before-"<<str1<<endl;
	//transform(str.begin(),str.end(),str.begin(),::toupper);
	for(int i=0;i<=str1.size();i++)
	{
		if(!str1[i]==' ')
		str1[i]=str1[i]+32;
	}
	cout<<"After: "<<str1;
	
	
}
