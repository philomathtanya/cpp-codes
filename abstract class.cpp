#include<iostream>
using namespace std;
class ludo{ // this class is known as abstract class.
	public:
virtual	void fun()=0;
			
		
};
class players :public ludo  //child class to define virtual func;
{
	public:
void fun()
{
	cout<<"hello";
	}	
};
int main()
{
players a;
	a.fun();//we dont create a obj for a virtual function .
}
