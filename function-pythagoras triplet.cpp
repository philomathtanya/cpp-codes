#include<iostream>
using namespace std;

	int py(int t,int base,int per)
	{
     int fi,se;
     fi=t*t;
     se=(base*base)+(per*per);
     if(fi==se)
     return 1;
     else return 0;
	}

   int main()
    {
    	int n=0,t=0,a,b,c,base=0,per=0;
    	cin>>a>>b>>c;
    	if(a>b)
    	{
    		if(a>c)
    		{
    		   t=a;	
    		   base=b;
    		   per=c;
    		   
			}
		}
        else
		
			if(b>c)
			{
				t=b;
				base=a;
				per=c;
			}
			else
			{
				t=c;
				base=a;
				per=b;
			}
   c= py(t,base,per);
    if(c==1)
    cout<<"yes";
    else
    cout<<"no";
        return 0;   	
	}
