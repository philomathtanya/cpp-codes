#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Triangle
{
public:
    void print_area(int s1, int s2, int s3)
    {
        double s = (s1+s2+s3)/2.0;
        cout << s << endl;
        cout << "Perimeter is " << (s1+s2+s3) << endl;
    }
};

int main()
{
    Triangle t;
    t.print_area(3,4,5);
    return 0;
}
//To print area and perimeter using class
