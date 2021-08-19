#include<iostream>
using namespace std;
class complex
{
	private:
		int a , b;
	public:
		complex()//default constructor
		{
			
		}
		complex(int k)
		{
			a=k;b=0;
		}	
	void show_data()
	{
		cout<<"value of a and b is"<<a<<","<<b<<endl;
	}
};
int main()
{

complex c1;
	int x=5;
c1=x;//c1.complex(x)
	c1.show_data();
}
