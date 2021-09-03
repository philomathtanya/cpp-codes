#include<iostream>
#include<tuple>
using namespace std;
int main()
{
 tuple<string,int,int>t1;
 t1=make_tuple("Tanya",15,20);
 cout<<get<0>(t1)<<" ";
 cout<<get<1>(t1)<<" ";
 
cout<<get<2>(t1)<<" ";
 
}
