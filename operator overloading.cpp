#include<iostream>
using namespace std;
class complex
{
	private:
		int a ;int b;
	public:
	    void setdata(int x,int y)
		{
		a=x;b=y;	
		}	
		void showdata()
		{
			cout<<"value of a is " <<a<<" and b is "<<b<<endl;
		}
		complex operator +(complex c)
		{
			complex t;
			t.a=a+c.a;
			t.b=b+c.b;
			return t;
		}
};
int main()
{
	complex c1,c2,c3;
	c1.setdata(3,4);
	c2.setdata(4,5);
	c3=c1+c2;
	c3.showdata(); 
}
