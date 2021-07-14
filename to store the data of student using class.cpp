#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int age;
	string gender;
	string address;
	float percent;


void output()

{
	cout<<"Name: ";
		cout<<name;
	cout<<endl<<"age :";
		cout<<age;
	cout<<endl<<"gender :" ;
		cout<<gender;
	cout<<endl<<"address :";
		cout<<address;
	cout<<endl<<"Percentage :";
		cout<<percent<<endl;
}

};

int main()
{
	cout<<"Enter the number of students: ";
	
	int n;
	cin>>n;
	
	
	
		student arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Data of"<<i+1<<" student="<<endl;
	cout<<"Enter the Name: "<<endl;
		cin>>arr[i].name;
	cout<<"Enter the age :" <<endl;
		cin>>arr[i].age;
	cout<<"Enter the gender :" <<endl;
		cin>>arr[i].gender;
	cout<<"Enter the address :" <<endl;
		cin>>arr[i].address;
	cout<<"Enter the Percentage :" <<endl;
		cin>>arr[i].percent;
		
	}
		cout<<"\n\n\t\t\t Data of student="<<endl;
	for(int i=0;i<n;i++)
	
	arr[i].output();
}

	
