#include <bits/stdc++.h>

using namespace std;
int main()
{
int n;
int b,k;
cin>>n>>k;

int s=0;
for(int i=0;i<n;i++)
{
    int a;
    cin>>a;
    if(i!=k)
    {
        s=s+a;
    }
}
cin>>b;


int t;
t=s/2;
if(b==t)
{
    cout<<"Bon Appetit";
}
else {

     cout<<b-t;
}
}


