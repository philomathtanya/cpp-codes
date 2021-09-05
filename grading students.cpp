#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,g,t;
      int x=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        if(arr[i]%5==0 ||arr[i]<38)
        {
            g=arr[i];
        }
        else if(arr[i]%5!=0)
        {
            t=arr[i];
            while(t%5!=0)
            {
            t++;
            }
            if(t-arr[i]<3 )
            {
               g=t; 
            }
            else if(t-arr[i]<=3)
            {
                g=arr[i];
            }
            else{
                g=arr[i];
            }
            
        }
        arr1[x]=g;
        x++;
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<endl;
    }
}
}
