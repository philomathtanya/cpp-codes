#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    //int su=0;
    
    getline(cin,s);
  
   
        int p=stoi(s);
        if(s[8]=='A')
        {
            if(p==12){
            cout<<"00";
            for(int i=2;i<=7;i++)
        cout<<s[i];
        }
            else{
            for(int i=0;i<=7;i++)
        cout<<s[i];}
               
        
        }
        else if(s[8]=='P')
        {
            if(p==12){
            cout<<p;
            }
            else{
        cout<<p+12;
            }for(int i=2;i<=7;i++)
        cout<<s[i];
        }
        
    
    
    
}
