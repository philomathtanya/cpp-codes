
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int cppIntType() {
        int t;
        cin>>t;
        return (t);
    }
    
    char cppCharType() {
        char ch;
        cin>>ch;
        return(ch);
    }
    
    float cppFloatType() {
       float f;
       cin>>f;
        return(f);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout << ob.cppIntType() << endl;
        cout << ob.cppCharType() << endl;
        cout << ob.cppFloatType() << endl;
    }
    return 0;
}  // }
