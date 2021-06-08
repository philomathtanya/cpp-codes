
#include<iostream>
using namespace std;
int main()
{
	int m,n;

	cin>>m>>n;//
	
	int arr[m][n];
	for(int i=0;i<m;i++)
	{
			for(int j=0;j<n;j++)
			{
				cin>>arr[i][j];
		    }
    }  
    int a=0,b=0;
    while(a<m && b<n)
    {
    	//line 1
    for(int i=b;i<n;i++)
    {
      cout<<arr[a][i]<<" ";
    }
    a++;
    //line 2
    
    for(int i=a;i<m;i++)
    {
      cout<<arr[i][n-1]<<" ";
    }
    
    n--;
    if(a<m)
    {
	
    //line 3
    for(int i=n-1;i>=b;--i)
    {
      cout<<arr[m-1][i]<<" ";
    }
    m--;
}
    if(b<n)
    {
    //line 4
    for(int i=m-1;i>=a;i--)
    {
      cout<<arr[i][b]<<" ";
    }
    b++;
}
}
return 0;
}
    
    
    
