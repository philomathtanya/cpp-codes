#include<iostream>
using namespace std;
class school
{
	private:
	 const int k;
	 int y;
	 	public:
	school(int &n):k(5),y(n)
	{
		cout<<y<<endl<<n;
			 }
			  		
};
int main()
{
	int m=6;
	school a(m);
}
