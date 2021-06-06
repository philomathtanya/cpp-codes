#include<iostream>
using namespace std;
int main()
{
	//input
	int n;
cout<<"Enter the num:";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=0;i<n-1;i++)
{
	int min=i;
	for(int j=i+1;j<n;j++)
	  {
		if(arr[min]>arr[j])
		min=j;
}
		if(min!=i)
		{
			 int t=arr[i];
			arr[i]=arr[min];
			arr[min]=t;
		}
		
	}
	

for(int i=0;i<n;i++)
cout<<arr[i]<<endl;
return 0;
}

