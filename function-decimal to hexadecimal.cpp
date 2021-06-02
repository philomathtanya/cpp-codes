#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;

	char od(int n)
	{
		int c,r,i=0;
		char p[100];
		while(n>0)
		{
			r=0;
		r=n%16;
         	if(r<10)
         	{
         		p[i]=r+48;
         		i++;
         		 
			 }
			 else if(r>10)
			 {
			 	p[i]=r+55;
			 	i++;
			 }

			 n=n/16;
		 
		 
		}
		 for (int j = i - 1; j >= 0; j--)
    cout <<p[j];
        
        }

	

   int main()
    {
    	int z;
       cin>>z;
	    od(z);
		
	
	}
