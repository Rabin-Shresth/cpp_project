//WAP to print positive number entered by the user.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num>0)
    {
        cout << num << endl;
    }
    else
    {
        cout << -1*num << endl;
    }
    return 0;
}