#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ifstream fin;
    fin.open("firstfile.dat");
	char ch;
	ch=fin.get();
	while(!fin.eof())
	{
		cout<<ch;
	ch=fin.get();
	}
	fin.close();

}
