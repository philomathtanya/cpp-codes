#include<iostream>
using namespace std;
//function template (addition)
template <class t,class p>
p add(t a,p b)
{
	return(a+ b);
}
int main()
{

		cout<<add(5,2.2)<<endl;
			cout<<add(5.9,2)<<endl;
				cout<<add(5.6,2.2)<<endl;
					cout<<add(5,2);
}
