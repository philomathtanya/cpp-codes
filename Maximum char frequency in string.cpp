#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	 string str;
	 int c=0,a=0;
	 cout<<"Enter the string:";
	 getline(cin,str);
	 
	 for(int i=0;i<=str.length();i++)
	 { c=0;
	 	for(int j=0;j<=str.length();j++)
	 	{
	 		if(str[j]==str[i])
			 c=c+1;	
			 
		}
		if(c>a)
		{
			a=c;
			 }	 
	 }
cout<<"The maximum frequency are:"<<a;
}
