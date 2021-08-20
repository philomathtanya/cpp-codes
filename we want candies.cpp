#include <bits/stdc++.h>
using namespace std;
int main()
{

int freq[256]={0};
char str[10];
cin>>str;


for(int i = 0; str[i] != '\0'; i++)
	{
		freq[str[i]]++;//abc
		
	}

			int c=0;
			int k;
			int min;
	for(int i = 0; i <256; i++)
	{
	
		if(freq[i] != 0)
		{
			
			cout<<(char)i<< freq[i]<<endl;//2
			k=freq[i];//2
		
			c=c+1;
			
	
		
		}
		if(freq[i]<=k)
		{
			min=k;
		}
	}


cout<<k*c;
}
