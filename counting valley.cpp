#include <bits/stdc++.h>

using namespace std;


int main()
{
    int u=0;
    int d=u;
    int n,a=0;
    cin>>n;
    string c;
    cin>>c;
    int arr[c.length()+1];
    arr[0]=0;
   for(int i=0;i<c.length();i++)
   {
       if(c[i]=='U')
       {
          a=a+1;
     arr[i+1]=a; 
           
       }
       else if(c[i]=='D')
       {
           a=a-1;
           arr[i+1]=a;
       }
   }
   int count=0;
     for(int i=0;i<c.length()+1;i++)
   { if(arr[i]==0)
   count=count+1;
   }
 /*for(int i=0;i<c.length()+1;i++)
   {
      cout<<arr[i]<<" ";
   }*/
   int t;
   t=count-1;
   if(t%2!=0)
   cout<<(t+1)/2;
   else
   cout<<(t)/2;
   }
//
