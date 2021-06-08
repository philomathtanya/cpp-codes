#include<iostream>
using namespace std;
int main()
{
	int m,n,x;
	cin>>m>>n;
	
	int arr[m][n];
	for(int i=0;i<m;i++)
	{
			for(int j=0;j<n;j++)
			{
				cin>>arr[i][j];
		    }
    }  
    cout<<"Enter the number";
    cin>>x;
	for(int i=0;i<m;i++)
	{
			for(int j=0;j<n;j++)
			{
				if (arr[i][j]==x)
				{
					cout<<"element found at position"<<i<<","<<j;
				}
			
			}
	}
}
