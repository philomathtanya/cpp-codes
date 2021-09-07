#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <string>v4(3,"hello");
	v4.pop_back();
	cout<<v4[2];
	
}
