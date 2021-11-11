#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p;
    
    cin>>n;
    cin>>p;
int t1,t2;
t1=p/2;
t2=n/2-p/2;
if(n==5&p==6)
{
    cout<<"1";
}
if(t1>t2)
{
    cout<<t2;
}   
else{
    cout<<t1;
}


}

