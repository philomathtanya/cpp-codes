#include<iostream>
using namespace std;
class dummy
{
	private:
		int a , b;
	public:
	void set_data(int x,int y)
	{
	a=x;b=y;	
	}	
	void show_data()
	{
		cout<<"value of a and b is"<<a<<","<<b<<endl;
	}
	
};
int main()
{
	dummy d1;
	d1.set_data(3,4);
	dummy d2;
	d2=d1;
	d2.show_data();
}
