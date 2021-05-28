#include<iostream>
using namespace std;

	int prime(int a,int b)
	{
			int i,c,j;
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


   int main()
    {
    	int a,b;
    	cin>>a>>b;
    	prime(a,b);
        return 0;   	
	}
