#include <iostream>
using namespace std ;

void swapnum(int a , int b)
{
    int c ;
    cout << "Before swapping \na=" << a << "\nb=" << b ;
        
        c = a ;
        a = b ;
        b = c ;
    
    cout << "\nAfter swapping \na=" << a << "\nb=" << b ;
}

int main ()
{
    int a , b ;
    cout << "Enter two numbers :" ;
    cin >> a >> b ;
    
    swapnum(a,b) ;

}