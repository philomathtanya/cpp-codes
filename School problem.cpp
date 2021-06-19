#include <iostream>
#include<string>
using namespace std;

int main() {
    int fee=15000,n;
	string name;
	cout<<"Enter the Name: ";
	getline(cin,name);
	cout<<"The fee of college is = "<<15000<<endl;
    cout << "Enter the marks: "<<endl;
    cin >> n;
   
    if (n > 90) 
    {
	
	    cout << "The grade is= A "<<endl;
	    cout<<"The total fee after discount= "<<fee-5000<<endl;
	}
	else 
		if(n>75 &&n<=90)
	{
			cout<<"The grade is= B "<<endl;
			cout<<"The total fee after discount= "<<fee-3000<<endl;
	}	else
			if(n<=75 && n>60 )
	{
				cout<<"The grade is= C "<<endl;
				cout<<"The total fee after discount= "<<fee-1000<<endl;
    }else
    {
    	cout<<"The grade is not so good....(Bad Result)!! "<<endl;
				cout<<"There is no discount on the fee!"<<endl;
	}
				
    

    return 0;
}

