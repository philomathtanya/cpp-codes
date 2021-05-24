#include<iostream>
using namespace std;
int main()
{
	int a;
	char ch;
	cout<<"Enter the number:";
	cin>>a;
	if(a==10)
	{
		cout<<"Number equal to 10";
	}
	else
		if(a>10)
		cout<<"Number greater then 10";
		else
			cout<<"Number is smaller then 10";
	return 0;
}
