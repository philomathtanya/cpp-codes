#include<iostream>
using namespace std;
int find(int b,int i)
{
	int ls,ad,ex;
	ls=1<<i;
	ex=~ls;
	ad=ex & b;
    cout<<ad;
	
	
	
	
}
int main()
{
int b,c,i;
cout<<"Enter Binary number:";
	cin>>b;
	cin>>i;
find(b,i);
}






































