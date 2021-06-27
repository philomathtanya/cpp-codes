#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
for(int i=0;i<=n-1;i++)
{
	cin>>arr[i];
}
int j;
int t=0;
	j=0;

for(int k=0;k<n;k++){
if(arr[k]==j)
	{
		j++;//1
	}	
}
t=1;
if(t==1)
{
	cout<<j;
}

}


