#include<iostream>
using namespace std;
int main()
{
	int a,b,i,c,j;
	cin>>a>>b;

	for (i=a;i<=b;i++)
	
	{
		c=0;
			for(j=2;j<=i;j++)
			{
				if(i%j==0)
				c=c+1;
			}
				if(c==1)
				cout<<i<<endl;
    }
}
