#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	//	c_str
	string s1;
char s[20];
	s1="ritesh";
	strcpy(s,s1.c_str());
	cout<<s;
	
}
