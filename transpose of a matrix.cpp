#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the order:";
	cin>>n;
	int arr1[n][n],array[n][n]={0};
	cout<<"Enter the matrix one:";
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr1[i][j];

			
	//logic section
	
	
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
	
	array[j][i]=arr1[i][j];
	}
	//output section
	cout<<"The Transpose of matrix is ="<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<array[i][j]<<" ";
		cout<<endl;
	}
}
