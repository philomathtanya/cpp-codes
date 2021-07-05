#include <bits/stdc++.h>//aaabb
using namespace std;
string change(string str)
{
	int n=str.length();//axb
	if(str.length()==0)
	return "";
	char ch=str[0];//a //x //b
	if (ch!='x')
		cout<<ch;//a//b
	change(str.substr(1));
	if(ch=='x')
	{
		cout<<ch;
	}		
}
int main()
{
	string str;
	cin>>str;
	cout<<change(str);
}
