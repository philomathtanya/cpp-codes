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
//sum of all the elements in an array
int total=0;
for(int i=0;i<n;i++)
total=total+arr[i];

int min=total,s=0;
for(int i=0;i<n;i++)
{

for(int j=i;j<n;j++)
{
	s=0;//cout<<s<<endl;
	for(int k=i;k<=j;k++)
	{
		s=s+arr[k];
	}
   if(s<min)
   {
	min=s;
   }


}	
}
cout<<min<<endl;
cout<<total<<endl;
cout<<"Ans="<<total-min<<endl;
}
