#include <bits/stdc++.h>//aaabb
using namespace std;
int main()
{
int m,n;
cin>>m>>n;
int a[m][n];
for(int i=0;i<m;i++)
{
	for (int j=0;j<n;j++)
	{
	cin>>a[i][j];	
	}
}
for(int i=0;i<m;i++)
{
	for (int j=0;j<n;j++)
	{
	cout<<a[i][j]<<" ";	
	}
	cout<<endl;
}

int s=0;
for(int k=0;k<m;k++)
{
	s=s+(a[0][k]*(a[1][(k+1)%3]*a[2][(k+2)%3] - a[1][(k+2)%3] * a[2][(k+1)%3]));
    
}
cout<<"determinant is"<<s;
}
