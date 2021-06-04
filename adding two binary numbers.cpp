#include<iostream>
using namespace std;
double add(int a,int b)
{
int c=0;
int i=0, s[i];
while(a>0 || b>0)
{
if(a%10==0 && b%10==0)
{
	if(c==0)
	s[i]=0;
	else
	s[i]=1;
	c=1;
	i++;
}
else

if(a%10==0 && b%10==1 ||a%10==1 && b%10==0 )
{
	if(c==0)
	s[i]=1;
	else
	{
	
	s[i]=0;
	c=1;
	}
}
else

if(a%10==1 && b%10==1)
{
	if(c==0)
{
	s[i]=0;
		c=1;
	}
	else
	s[i]=1;
	c=1;
}
	i++;
a=a/10;
b=b/10;
}
if (c==1)
	s[i]=1;
else
	i--;
for(int j=i;j>=0;j--)
{
	cout<<s[j];
}


return 1;}
int main()
{int r,t;
cout<<"Enter the first Binary number:";
	cin>>r;
	cout<<"Enter the second Binary number:";
	cin>>t;
	add(r,t);}






































