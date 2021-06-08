//Comparing two strings using strcmp
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[50] , str2[50] ;
    int result;
    cout << "Enter 1st string: " ;
    gets (str1) ;
    cout << "Enter 2nd string: " ;
    gets (str2) ;

        result = strcmp (str1 , str2) ;

    if (result == 0)
    {
        cout << "The provided strings are equal .";
    }
    else
    {
        cout << "The provided strings are unequal.";
    }

    cout << "\nValue returned by strcmp() is = " << result ;
    return 0;
}