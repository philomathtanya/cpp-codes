#include<iostream>



#include<map>
using namespace std;
int main()
{
	map<int,string>c;
	c[100]="ritesh";
	c[150]="tanya";
	 map<int, string>::iterator itr;
	  for (itr = c.begin(); itr != c.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    c.clear();
     for (itr = c.begin(); itr != c.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
   
}
