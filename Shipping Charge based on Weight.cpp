#include<iostream>

using namespace std;
int main()
{
   float weight, basecharge=28.50, perkgcharge=4, temp, extracharge, charge;
   cout<<"Enter Parcel's Weight (in Kg): ";
   cin>>weight;
   if(weight<=2)
      cout<<"\nShipping Charge: "<<basecharge;
   else
   {
      temp = weight-2;
      extracharge = temp * perkgcharge;
      charge = extracharge + basecharge;
      cout<<"\nShipping Charge: "<<charge;
   }
   cout<<endl;
   return 0;
}
