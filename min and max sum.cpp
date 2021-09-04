#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    unsigned long long int min=0;
     unsigned long long int max=0;
    for(int i=0;i<n-1;i++)
    {
        min+=arr[i];
        
    }
     for(int i=1;i<n;i++)
    {
        max+=arr[i];
        
    }
    cout<<min<<" ";
    cout<<max;
}
