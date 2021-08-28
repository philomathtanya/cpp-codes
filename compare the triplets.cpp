#include <bits/stdc++.h>

using namespace std;
void compare(int arr1[],int arr2[])
{
    int a=0,b=0;
for(int i=0;i<3;i++)
{
    if(arr1[i]>arr2[i])
     a+=1;
    if(arr1[i]<arr2[i])
     b+=1;
}
cout<<a<<" "<<b;
}

int main()
{
int n1=3,n2=3;
int arr1[3],arr2[3];
for(int i=0;i<3;i++)
{
    cin>>arr1[i];
}
for(int j=0;j<3;j++)
{
    cin>>arr2[j];
}
compare(arr1,arr2);
}
