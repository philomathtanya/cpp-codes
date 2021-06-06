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
//sort
int min=arr[0],max=arr[0];
for(int i=1;i<n;i++)
{
	for(int j=0;j<n-i;j++)
	{
		if(arr[j]>arr[j+1])
		{
			int t=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=t;
		}
	}
}
//print
for(int i=0;i<n;i++)
cout<<arr[i]<<endl;
//search
int h,l,x;
l=0;
h=n-1;
cout<<"write the element to be find";
cin>>x;
while(l<=h)
{
	int m=(l+h)/2;
	if(x==arr[m])
	{
	cout<<"element at"<<m+1;
	
	if(x<arr[m])
	{
		h=m-1;//1
	}
	else if(x>arr[m])
	{
		l=m+1;
	}

	else{
		cout<<"element not found";
		
	}	
	
	
}
}




}

