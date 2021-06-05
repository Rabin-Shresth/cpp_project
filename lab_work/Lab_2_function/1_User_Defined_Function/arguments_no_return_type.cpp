// WAP to find the Area of Triangle with arguments and no return type.

#include <iostream>

using namespace std;

void area_triangle(float base , float height);

int main()
{
    float base, height ;
    cout << "Enter the length of base and height: ";
    cin >> base >> height;
    
    area_triangle(base, height);
    return 0;
}

void area_triangle(float base, float height)
{
    float area;
    area = 0.5 * base * height ;
    cout << "The area of triangle is : " << area ;
}