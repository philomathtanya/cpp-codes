#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    set<int> s;
      for (int i = 0; i < n; i++) {
  s.insert(c[i]);
    }
set<int>::iterator it;

/*
    for (it = s.begin(); it != s.end(); it++){
        cout <<* it;}
        */
        
      int t,sum=0;;  
   for(it=s.begin();it!=s.end();it++){
       t= std::count(c, c + n, *it);
       sum=sum+t/2;
       
  }          
cout<<sum;
        }
    
   
    
    
