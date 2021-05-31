// WAP to check whether an integer is positive or negative.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num>0)
    {
        cout << "The entered number is positive.";
    }
    else
    {
        cout << "The entered number is negative";
    }
    return 0;
}