#include<iostream>
using namespace std;
class A
{
	public:
		virtual void fun1()
		{
			
		}
};
class B: public A
{
	public:
	void fun1()
	{
	}
	void fun2()
	{
	}
};		
int main()
{
	A *p;
	A o1;
	B o2;
	p = &o2;
	p->fun1();// o2.fun1()
	
}
