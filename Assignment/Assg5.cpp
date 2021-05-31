// WAP to build a simple calculator using SWITCH statement.

#include <iostream>
using namespace std;

int main()
{
    int ch,num1,num2,add,sub,mult,div;
    cout << "Enter any two numbers: ";
    cin >> num1 >> num2;
    cout << "\nEnter your choice: ";
    cout << "\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division\n\n -->>";
    cin >> ch;

    switch (ch)
    {
    case 1:
        add = num1 + num2;
        cout << "\nThe sum is: "<< add << endl;
        break;

    case 2:
        sub = num1 - num2;
        cout << "\nThe difference is: "<< sub << endl;
        break;

    case 3:
        mult = num1 * num2 ;
        cout << "\nThe product is: "<< mult << endl;
        break;

    case 4:
        div = num1 / num2;
        cout << "\nThe quotient is: "<< div << endl;
        break;           
    }
    return 0;
}