#include<iostream>
using namespace std;
int sort(int arr[],int n)
{
	if(n==1)
	{
		return true;
	}
	int sa=sort(arr+1,n-1);
 return(arr[0]<arr[1] && sa);
	
}







int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
bool c=sort(arr,n);
cout<<c<<"the ans is in bool ";

}
