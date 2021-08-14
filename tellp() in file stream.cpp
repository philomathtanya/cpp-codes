#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("firstfile.dat",ios::app);
int pos;
pos=fout.tellp();
cout<<pos;
	fout.close();
}
