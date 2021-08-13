#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("firstfile.dat",ios::out|ios::binary);
	fout<<"this is our 2nd \n  second line";
	fout.close();
}
