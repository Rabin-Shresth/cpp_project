#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char str1[50] ;
    cout << "Enter a string: ";
    gets (str1) ;

        cout << "The reverse of the sting is : " << strrev(str1) ;

    return 0;
}