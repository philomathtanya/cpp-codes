#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("firstfile.dat",ios::in|ios::binary);
	char ch;
	ch=fin.get();
	while(!fin.eof()
	{
	    cout<<ch;
	    ch=fin.get();
}

	fin.close();
}
