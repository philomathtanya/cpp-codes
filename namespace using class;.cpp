#include<iostream>
using namespace std;
namespace ludo{
	int a;
	int fun();
	class team	
{
	public:
		int fun1();
};
	

	
}
//using namespace ludo;
int ludo::fun()
{
	cout<<"yo"<<endl;
}
 int ludo::team::fun1()
 {
 	cout<<"yeahhhh"<<endl;
 }
 using namespace ludo;
int main()
{
	a=10;
	cout<<a;
	fun();
	team obj;
	obj.fun1();
}
