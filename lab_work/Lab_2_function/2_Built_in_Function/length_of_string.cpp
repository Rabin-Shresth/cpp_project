#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[50];
    int len;
    cout << "Enter any word: ";
    gets (str) ;
    
        len = strlen(str) ;
    
    cout << "The length of word is :" << len ;
    return 0;
}