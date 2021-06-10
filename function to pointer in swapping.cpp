#include<iostream>
using namespace std;
int swap(int *a,int*b)
{
	int *t;
	t=*a;
	*a=*b;
	*b=t;
	return *a;
	return *b;


}







int main()
{
	int a,b;
	
	cin>>a;
    cin>>b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
   swap(a,b);
   cout<<"After swap: a="<<a<<endl;
   cout<<"After swap: b="<<b<<endl;
   
   
}
