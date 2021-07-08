#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the order:";
	cin>>n;
	int arr1[n][n],arr2[n][n],array[n][n]={0};
	cout<<"Enter the matrix one:";
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr1[i][j];
	cout<<"Enter the matrix two:";
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr2[i][j];
			
			
	//logic section
	
	
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
	
	array[i][j]=arr1[i][j]+arr2[i][j];
	}
	//output section
	cout<<"The Addition of matrix="<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<array[i][j]<<" ";
		cout<<endl;
	}
}
