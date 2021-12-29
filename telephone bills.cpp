#include<iostream>

using namespace std;
int main()
{
   int ncall, temp, charge;
   cout<<"Enter Total Number of Calls Made: ";
   cin>>ncall;
   if(ncall<=150)
      cout<<"\nNo charge!";
   else
   {
      ncall = ncall - 150;
      if(temp<=250)
         charge = temp*1;
      else
      {
         temp = ncall-250;
         charge = 250 + (temp*2);
      }
      cout<<"\nTotal Phone Bill to Paid: "<<charge;
   }
   cout<<endl;
   return 0;
}
