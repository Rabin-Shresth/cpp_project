// WAP find if an integer is an even or odd or neither.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num==0)
    {
        cout << "The number is even";
    }

    else if (num>0)
    {
        if (num%2==0)
        {
            cout << "The number is even.";
        }
        else
        {
            cout << "The number is odd.";
        }
    }
    else
    {
        cout << "The number is negative.";
    }
    return 0;
}