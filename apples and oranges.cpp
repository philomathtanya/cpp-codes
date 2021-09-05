#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s,t,a,b,m,n,c1=0,c2=0;
    cin>>s>>t>>a>>b>>m>>n;
    int app[m],org[n],app1[m],org1[n];
     for(int i=0;i<m;i++)
    {
        cin>>app[i];
    }
     for(int i=0;i<n;i++)
    {
        cin>>org[i];
    }
    for(int i=0;i<m;i++)
    {
        app1[i]=app[i]+a;
    }
    for(int i=0;i<n;i++)
    {
        org1[i]=org[i]+b;
    }
    for(int i=0;i<m;i++)
    {
    if(app1[i]>=s && app1[i]<=t)
    c1++;
    }
    for(int i=0;i<n;i++)
{
    if(org1[i]>=s && org1[i]<=t)
    c2++;
}
 cout<<c1<<endl;
 cout<<c2<<endl;
}
