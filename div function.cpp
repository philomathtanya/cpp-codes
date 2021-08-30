#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	div_t result1 = div(51, 6);

	cout << "Quotient of 51/6 = " << result1.quot << endl;
	cout << "Remainder of 51/6 = " << result1.rem << endl;

	ldiv_t result2 = div(19237012L,251L);

	cout << "Quotient of 19237012L/251L = " << result2.quot << endl;
	cout << "Remainder of 19237012L/251L = " << result2.rem << endl;

	return 0;
}
