#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char strorg[50] , strfinal[50] ;
    cout << "Enter any string to 1st: " ;
    gets (strorg) ;

    strcpy (strfinal , strorg) ;

    cout << "String entered to 1st: " << strorg ;
    cout << "\nString Copied to 2nd: " << strfinal ;
    return 0 ;
}