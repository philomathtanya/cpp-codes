#include<iostream>
using namespace std;
int main()
{
    int num, orig, rev=0, rem;
    cout<<"Enter the Number: ";
    cin>>num;
    orig = num;
    while(num>0)
    {
        rem = num%10;
        rev = (rev*10)+rem;
        num = num/10;
    }
    if(orig==rev)
        cout<<"\nThis Number is equal to its Reverse";
    else
        cout<<"\nThis Number is not equal to its Reverse";
    cout<<endl;
    return 0;
}
