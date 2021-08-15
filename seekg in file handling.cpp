#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("firstfile.dat",ios::in);
	char ch;
	int pos;
	ch=fin.get();
pos=fin.tellg();
//cout<<pos;
fin.seekg(4,ios_base::cur);
cout<<fin.tellg();
fin.seekg(4);
cout<<fin.tellg();
	fin.close();
}
