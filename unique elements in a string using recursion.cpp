#include <bits/stdc++.h>//aaabb
using namespace std;
string change(string str)
{
	if(str.length()==0)
	return "";
	char ch=str[0];//a //a //a //b //b
	string ans= change(str.substr(1));//aabb //abb //bb //b "
    if(ch==ans[0])
	{
		return ans;
	}	
	else
	{
		return ch+ans;
	}
}




int main()
{
	string str;
	cin>>str;
	cout<<change(str);
}
