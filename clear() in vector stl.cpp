#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <string>v4(3,"hello");
	v4.push_back("tanya");
	cout<<v4[3];
v4.clear();
	cout<<v4.size();
	
}
