#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int t=max(a,b);
    int r=max(c,d);
    int tr=max(r,t);
    return tr;
}


int main() {
    int a, b, c, d;
   cin>>a>>b>>c>>d;
   cout<<max_of_four(a,b,c,d);



    return 0;
}
