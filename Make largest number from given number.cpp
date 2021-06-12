//make largest number from given number
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string num,a,b;
cout<<"Enter the number:";
cin>>num;
cout<<"The number is:"<<num<<endl;
sort(num.begin(),num.end(),greater<int>());
cout<<"The largest number is:"<<num<<endl;
}
