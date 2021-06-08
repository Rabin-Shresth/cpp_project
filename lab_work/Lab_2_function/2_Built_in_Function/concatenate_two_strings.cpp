#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1 [50] , str2[50] ;
    cout << "Enter any two string : ";
    gets (str1);
    gets (str2);

        strcat (str1 , str2) ;

    cout << "The concatenated string is : " << str1 ;
    return 0;
}