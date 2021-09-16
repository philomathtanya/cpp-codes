#include<iostream>



#include<map>
using namespace std;
int main()
{
	map<int,string>c{
	{100,"ritesh"},{150,"tanya"},{180,"swastik"},{130,"rahul"}
};

	 map<int, string>::iterator itr;
	  for (itr = c.begin(); itr != c.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
   
}
