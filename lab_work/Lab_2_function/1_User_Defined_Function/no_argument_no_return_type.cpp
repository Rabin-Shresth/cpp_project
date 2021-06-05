// WAP to find the Area of Triangle with no arguments and no return type.

#include <iostream>

using namespace std;

void area_triangle();

int main()
{
    area_triangle();
    return 0;
}

void area_triangle()
{
    float area, base, height ;

    cout << "Enter the length of base and height: ";
    cin >> base >> height;

    area = 0.5 * base * height;
    
    cout << "The area of Triangle is: " << area;
}