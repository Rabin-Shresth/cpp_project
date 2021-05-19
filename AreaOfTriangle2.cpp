#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c; //a,b,c are sides of triangle
    float s,area; //s is the semi perimeter of triangle
        cout<<"Enter three sides of triangle : ";
        cin>>a>>b>>c;

            s=0.5*(a+b+c);
            area=sqrt (s*(s-a)*(s-b)*(s-c));

        cout<<"Area of triangle is : "<<area;
}