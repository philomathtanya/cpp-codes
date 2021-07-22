#include<iostream>
using namespace std;
class funcloading
{
	public:
		void fun()
		{
			cout<<"function with no arguments"<<endl;
		}
		void fun(int t)
		{
				cout<<"function with int arguments"<<endl;
		}
		void fun(double r)
		{
				cout<<"function with double arguments"<<endl;
		}
};
int main()
{
	funcloading A;
	A.fun();
	A.fun(10);
	A.fun(10.26);
	}
