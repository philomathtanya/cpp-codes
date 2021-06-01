#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;

	int od(char n[10])
	{
		int c,p,r,b=0,t=0,l;
		l=strlen(n);
         for (int i=l-1;i>=0;i--)
         {
         	//cout<<t<<endl;
         	if(n[i]>='0' && n[i]<='9')
         	{
         		p=n[i]-48;
         		 b=b+(p*pow(16,t));
         		 
			 }
			 else if(n[i]>='A' && n[i]<='F')
			 {
			 	p=n[i]-55;
			 	 b=b+(p*pow(16,t));
			 }
			
			// cout<<b<<endl;
			  t=t+1;
		 
		 }
        
       	return b;   
        }

	

   int main()
    {
    	char z[10];
       cin>>z;
	  
	cout<<od(z);   	
	return 0;
	}
