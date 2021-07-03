#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
int trr[n]={0};
int t=0;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}

for(int i=0;i<n;i++)
{

for(int j=i+1;j<n;j++)
{

if(arr[i]==(arr[j]==((-1)*arr[i])))
{
trr[t]=arr[j];
t++;
}
else
{

trr[t]=arr[i];
t++;
}
}	
}
for(int k=0;k<t;k++)
{
	cout<<trr[k];        //4,-4,6,-6
}
       //4,2,-4,-2
}


