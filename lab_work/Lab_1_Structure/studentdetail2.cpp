// WAP 
#include <iostream>
using namespace std;

struct student
{
    char name[20];
    char address[30];
    int roll;
}s[20];

int main()
{
    for(int i=0; i<3; ++i)

    {
        cout <<"\nEnter name: ";
        cin    >>s[i].name;

        cout <<"Enter Address: ";
        cin >>s[i].address;

        cout <<"Enter Roll no: ";
        cin >>s[i].roll;
    }

    cout << "Displaying Information: "<< endl;
    
    for(int i=0; i<3; ++i)
    {
        cout <<"\nName: "<< s[i].name <<endl ;
        cout <<"Address: "<< s[i].address <<endl ;
        cout <<"Roll no.: "<< s[i].roll <<endl ;
    }
    return 0;
}