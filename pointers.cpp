#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
     int x=(*a+(*b));  
     int y=*a-*b;
     y=abs(y);
    // cout<<x<<"\n"<<y;
    *a=x;
    *b=y;

}

int main() {
    int a, b;

    int *pa = &a, *pb = &b;
    cin>>a>>b;

update(pa, pb);
cout<<a<<"\n"<<b;



}
