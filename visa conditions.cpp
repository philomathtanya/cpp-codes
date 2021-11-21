#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;
int arr[n][6];
for (int i=0;i<n;i++)
{
    for(int j=0;j<6;j++)
    {
        cin>>arr[i][j];
    }
    
    
}
for (int i=0;i<n;i++)
{
if((arr[i][0]<=arr[i][1])&&(arr[i][2]<=arr[i][3])&&(arr[i][4]>=arr[i][5]))
{
cout<<"YES \n";
}
else {
    cout<<"NO \n";;
}
}
	return 0;
}
