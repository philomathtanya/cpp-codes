#include <bits/stdc++.h>
using namespace std;
void sol(string str,int n,int r)     //ABC,0,2//ABC,1,2
{
//	int n=0;
if(n==r)
{
	cout<<str<<"\n";//   ABC,
}

	for (int i=n;i<=r;i++)0//1//
	{
		swap(str[n],str[i]);//00//10//20//10//11//12//20//21//22
		sol(str,n+1,r);  //ABC,1,2 // ABC,2,2 
		swap([n],str[i]);
		
	}
}
int main()
{
	string str;
		cin>>str;
		int l=str.size();
sol(str,0,l-1);   //ABC,0,2


}
