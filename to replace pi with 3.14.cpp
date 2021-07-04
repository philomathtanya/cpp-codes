
#include <bits/stdc++.h>
using namespace std;
void change(string str)
{
	if(str.length()==0)
	return;

if(str[0]=='p' && str[1]=='i')
{
	cout<<"3.14";
	change(str.substr(2));
}
else
{
	cout<<str[0];
	change(str.substr(1));
}

}





int main()
{
	string str;
	cin>>str;
	change(str);
}
