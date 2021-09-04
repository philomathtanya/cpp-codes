#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    int c=0;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
           cin>>arr[i]; 
    }
    sort(arr,arr+n);
    int max=arr[n-1];
     for (int i=0;i<n;i++)
    {
         if(arr[i]==max)
         {
             c++;
         }
    }
    cout<<c;
}
