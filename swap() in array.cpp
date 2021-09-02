#include <bits/stdc++.h>
#include<array>
using namespace std;
int main()
{
	array<int,5>arr1={1,2,3,4,5};
array<int,5>arr2={11,12,13,14,15};
	arr1.swap(arr2);
	for(int i=0;i<=4;i++)
	{
		cout<<arr1[i];
	}
	cout<<endl;
	for(int i=0;i<=4;i++)
	{
		cout<<arr2[i];
	}
	
}

