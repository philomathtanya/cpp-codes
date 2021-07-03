#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}

int max=0,s=0;
for(int i=0;i<n;i++)
{

for(int j=i;j<n;j++)
{
	s=0;//cout<<s<<endl;
	for(int k=i;k<=j;k++)
	{
		s=s+arr[k];
	}
   if(s>max)
   {
	max=s;
   }


}	
}
cout<<max;
}


