#include<iostream>
using namespace std;
int find(int b,int i)
{
	int ls,l,ad,ex;
	ls=1<<i;
	ex=~ls;
	ad=ex & b;
	l=ad | ls;
    cout<<l;
	
	
	
	
}
int main()
{
int b,c,i;
cout<<"Enter Binary number:";
	cin>>b;
	cin>>i;
find(b,i);
}






































