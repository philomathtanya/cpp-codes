#include<iostream>
using namespace std;
void sort(int* arr,int n)
{
	for (int i=1;i<n;i++)
	{
		for (int j=0;j<n-i;j++)
		{
			if(*(arr+j) > *(arr+j+1))
			{
				int t=*(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) =t;
			}
				
		}
	}
	for(int i=0;i<n;i++)
{
	cout<<*(arr+i)<<endl;
}

}







int main()
{
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++)
	cin>>arr[i];
sort(arr,n);
return 0;
}
