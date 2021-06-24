// C++ program to find the quadrant in which the given coordinates lie

#include<iostream>
using namespace std;

int main()
{
//Fill the code
	int a,b;
	cout<<"Enter the Co ordinates:";
	cin >> a >> b;
	if(a > 0 && b > 0)
		cout << "Ist Quadrant";
	else if(a < 0 && b > 0)
		cout << "IInd Quadrant";
	else if(a < 0 && b < 0)
		cout << "IIIrd Quadrant";
	else if(a > 0 && b < 0)
		cout << "IVth Quadrant";
	else
		cout << "Origin";
return 0;
}
