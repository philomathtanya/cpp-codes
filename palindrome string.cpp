#include<iostream>
#include <cmath>
#include<string.h>
using namespace std;
int main()
{
	char str[100];
	cin>>str;
int	l=strlen(str);
int r;
	r=0;
	for(int i=0;i<l;i++)
	{
		if(str[i] != str[l-i-1])
		{
			r=1;
			break;
		}
	}
	if(r==0)
	{
		cout<<"the string is palindrome";
	}
	else
	cout<<"the string is not palindrome";
}
