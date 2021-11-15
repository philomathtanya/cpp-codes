#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
   cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    int e;
    cin>>e;
    int p;
  cin>>p;
    for(int i=n;i>p-1;i--)
    {
       arr[i]=arr[i-1];
        
        
    }
    arr[p-1]=e;
    n++;
    
    for(int j=0;j<n;j++)
    {
        cout<<arr[j];
    }
}
