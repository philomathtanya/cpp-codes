#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		int binary_to_decimal(string str)
		{
	int n=str.size();
	int t;
	 int b=str.size();
	    int d=0;
	for(int i=0;i<n;i++)
	{
	    t=(str[i]-'0');
d=d+(t*pow(2,b));
	b--;
		       
		   }
		   	return d/2;
	}

	
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string str;
    	cin >> str;
    	Solution ob;
    	int  ans = ob.binary_to_decimal(str);
    	cout << ans <<"\n";
    }
	return 0;
}  // }
