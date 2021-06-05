#include <iostream>
using namespace std;

float area_triangle();

int main()
{
    float area;

    area = area_triangle();

    cout << "The area of Triangle is : " << area ;
    return 0;
}

float area_triangle()
{
    int base , height , ar ;
    cout << "Enter the length of base and height : " ;
    cin >> base >> height ;

    ar = 0.5 * base * height ;
    
    return ar ;
}