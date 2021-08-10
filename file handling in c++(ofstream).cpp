#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("firstfile.dat");
	fout<<"We are creating our first file of name first file.";
	fout.close();

}
