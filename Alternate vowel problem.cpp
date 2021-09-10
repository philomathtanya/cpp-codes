#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 
    string s,v="aeioun";
    cin>>s;
    int a=s.length();//9
    int b=v.length();//6    
    int n=0;
    for(int i=0;i<a;i+=2)
    {
        for(int j=0;j<b;j++)
        {
            if(s[i]!=v[j] && s[i+1]==v[j])
            {
                n++;
                break;
            }
           
        }
    }
    int f=0;
    if(n==floor(a/2))
    {
        for(int j=0;j<b;j++)    
        {
            if(s[a-1]!=v[j])
            {
                 f=0;
            }else
                f=1;
      } 
            
    }
        // else
        //cout<<"NO";
    
    //cout<<n;
    if(f==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
