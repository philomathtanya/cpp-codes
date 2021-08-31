#include <bits/stdc++.h>

using namespace std;
void Sum(int n,int arr[])
{
    int s=0;
for(int i=0;i<n;i++)
{
    s=s+arr[i];
}
cout<<s;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
Sum(n,arr);
}
