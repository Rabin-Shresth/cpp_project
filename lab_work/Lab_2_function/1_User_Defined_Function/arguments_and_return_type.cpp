// WAP to find the Area of Triangle with arguments and return type.

#include <iostream>
#include <conio.h>

using namespace std;

float area_triangle (float , float);

int main()
{
    float area, base, height ;

    cout << "Enter the length of base and height: ";
    cin >> base >> height;

    area = area_triangle (base, height);
    cout << "The area of Triangle is: " << area;
    return 0;
}

float area_triangle (float base, float height) 
{
    float area;

    area = 0.5 * base * height;

    return area;
}