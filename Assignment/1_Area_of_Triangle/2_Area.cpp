#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c,s,area; //a,b,c are the sides of triangle and s is the semi perimeter of the triangle.
    cout << "Enter the three sides of triangle: ";
    cin >> a >> b >> c;

    s = 0.5 * (a+b+c);
    area = sqrt( s * (s-a) * (s-b) * (s-c) );

    cout << "The Area of given triangle is: " << area << endl ;
    return 0 ;
}