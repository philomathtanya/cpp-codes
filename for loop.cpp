include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {


        if(i==1)
    {
        cout<<"one";
        cout<<"\n";
    }
    else if(i==2)
    {
        cout<<"two";
        cout<<'\n';
    }
    else if(i==3)
    {
        cout<<"three";
        cout<<"\n";
    }
    else if(i==4)
    {
        cout<<"four";
        cout<<"\n";
    }
    else if(i==5)
    {
        cout<<"five";
        cout<<"\n";
    }
    else if(i==6)
    {
        cout<<"six";
        cout<<"\n";
    }
    else if(i==7)
    {
        cout<<"seven";
        cout<<"\n";
    }
    else if(i==8)
    {
        cout<<"eight";
        cout<<"\n";
    }
    else if(i==9)
    {
        cout<<"nine";
        cout<<"\n";
    }

    }
    for(int i=10;i<=b;i++)
    {
        if(i%2==0)
        {
            cout<<"even";
            cout<<"\n";
        }
        else 
        {
            cout<<"odd";
            cout<<"\n";
        }
    }


    return 0;

        }
