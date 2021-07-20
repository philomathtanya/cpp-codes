#include <iostream>
using namespace std;
class A
{
	public:
		int a;
		void funa()
		{
			cout<<"function A";
		}
	
	private:
		int b;
		void funb()
		{
			cout<<"function B";
		}	
	
	protected:
		int c;
		void func()
		{
			cout<<"function C";
		}	
		
};
int main()
{
	A obj;
    obj.funa();
	
}
