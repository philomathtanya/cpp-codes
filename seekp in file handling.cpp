#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("firstfile.dat",ios::ate);
	char ch;
	int pos;
fout<<"tanya is smart";
pos=fout.tellp();
cout<<pos<<endl;;
fout.seekp(-5,ios_base::end);
cout<<fout.tellp();
//fout<<"hi";

	fout.close();
}
