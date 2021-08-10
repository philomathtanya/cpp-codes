#include<iostream>
using namespace std;
//Addition by class template
template <class t,class p>
class add
{
	public:
p sum(t a,p b)
{
	return a+b;
}
};

int main()
{ 
add<int,float>obj;
cout<<obj.sum(2,4.55);

}
