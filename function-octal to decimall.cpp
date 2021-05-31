#include<iostream>
#include<cmath>
using namespace std;

	int od(int n)
	{
		int c,p,r,b=0,t;
		t=n,c=0;
		while(n>0)
		{
			r=n%10;
			n=n/10;
			c=c+1;
		}	
         for (int i=0;i<c;i++)
          {
         	p=t%10;
	        b=b+(p*pow(8,i));
          	t=t/10;
        }
	return b;
	}

   int main()
    {
    	int i;
       cin>>i;
	  
	   cout<<od(i);   	
	}
