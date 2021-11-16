#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    cout<<s1.size()<<" ";
    cout<<s2.size();
    cout<<"\n";
    cout<<s1+s2;
    string s;
s=s1[0];
s1[0]=s2[0];
s2[0]=s[0];
cout<<"\n";
cout<<s1<<" ";

cout<<s2;

    
    
  
    return 0;
}
