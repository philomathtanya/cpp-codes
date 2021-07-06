#include<iostream>
using namespace std;
int main()
{
	cout<<"enter m ,n and p and q";
	int m,n,p,q;
	int s=0;
	cin>>m>>n>>p>>q;
	int a[m][n];
	int b[p][q];
	int mul[10][10];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			cin>>b[i][j];
		}
	}
	if(n==p)
	{
	for(int i=0;i<m;i++)
	{
	for(int j=0;j<q;j++)
	{
		for(int k=0;k<p;k++)
		{
			s=s+a[i][k]*b[k][j];
		}
			mul[i][j]=s;
			s=0;
	}	
	}
	cout<<"the multiplication is:"<<endl;	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			cout<<mul[i][j]<<" ";
		}
		cout<<endl;
	}
	}
}
