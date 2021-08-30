#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	long int x,y;
	x = -9999999L;
	y = 10000000L;

	cout << "labs(" << x << ") = |" << x << "| = " << labs(x) << endl;
	cout << "labs(" << y << ") = |" << y << "| = " << labs(y) << endl;

	return 0;
}
