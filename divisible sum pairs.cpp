#include <bits/stdc++.h>

using namespace std;
int main()
{
  int n;
  cin>>n;
  int k;
  cin>>k;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
      cin>>v[i];
  }
  int c=0;
  for(int i=0;i<n;i++)
  {
      for(int j=i+1;j<n;j++)
      {
      int t;
      t=v[i]+v[j];
      if(t%k==0)
      {
         c++; 
      }
      }
  }
  cout<<c;
    
}



   
