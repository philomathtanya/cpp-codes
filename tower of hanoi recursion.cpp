#include <bits/stdc++.h>
using namespace std;
void tower(int n,char s,char d,char h)
{
	if(n==0)
	{
		return;
	}
	tower(n-1,s,h,d); 
	cout<<"move from "<<s<<"to"<<d<<endl;
	tower(n-1,h,d,s);
}








int main()
{
	int n;
	cin>>n;
	tower(n,'A','C','B');
}
