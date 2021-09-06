#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v1{10,20,30,40,50,60,70,80,90,100};
cout<<"before";
for(int i=0;i<=9;i++)
{
	cout<<v1[i]<<endl;
}
cout<<"after"<<endl;;
vector<int>::iterator on=v1.begin();
v1.insert(on+3,200);
for(int i=0;i<=10;i++)
{
	cout<<v1[i]<<endl;
}

}
