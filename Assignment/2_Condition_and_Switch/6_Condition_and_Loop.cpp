// WAP to find the sum of first "n" natural number

#include <iostream>
using namespace std;

int main()
{
    int num , s , i ;
    cout << "Enter a natural number: ";
    cin >> num;

    for (i=1 ; i < num+1 ; ++i)
    {
        s = s + i ;
    }

    cout << "\nThe sum of first entered natural number is : " << s << endl;
    return 0; 
}