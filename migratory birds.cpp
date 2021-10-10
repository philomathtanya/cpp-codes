#include <bits/stdc++.h>


using namespace std;


   int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int i=1;
    
    int c1=0;
    for(int j=0;j<n;j++)
    if(i==a[j])
    {
        c1++;
    }
    
    i++;
    int c2=0;
    for(int j=0;j<n;j++)
    if(i==a[j])
    {
        c2++;
    }
   
    i++;
    int c3=0;
    for(int j=0;j<n;j++)
    if(i==a[j])
    {
        c3++;
    }
    
    i++;
    int c4=0;
    for(int j=0;j<n;j++)
    if(i==a[j])
    {
        c4++;
    }
    
    i++;
    int c5=0;
    for(int j=0;j<n;j++)
    if(i==a[j])
    {
        c5++;
    }
    if(c1>=c2 && c1>=c3 && c1>=c4 && c1>=c5)
    {
        cout<<"1";
    }
    else 
    if(c2>=c3 && c2>=c4 && c2>=c5)
    {
        cout<<"2";
    }
    else 
    if( c3>=c4 && c3>=c5)
    {
        cout<<"3";
    }
    else 
     if(c4>=c5)
    {
        cout<<"4";
    }
    else {
        cout<<"5";
    
    
    }
    return 0;
}
