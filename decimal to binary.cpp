#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
  cin>>n;
int arr[1000];
    int i=0;
    while(n>0)
    {
        arr[i]=n%2;
        i++;
        n=n/2;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }
}
