#include <iostream>
using namespace std;

int main()
{
    int base,height,area;
    cout << "Enter the value of base: ";
    cin >> base;
    cout << "Enter the value of height: ";
    cin >> height;

    area = 0.5 * base * height ;

    cout << "The area of given triangle is: " << area << endl;
    return 0;
}