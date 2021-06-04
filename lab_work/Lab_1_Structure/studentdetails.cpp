#include <iostream>
using namespace std;

struct student
{
    char name[20];
    char address[30];
    int roll;
};

int main()
{
    student s;
    cout <<"Enter name: ";
    cin >> s.name;
    cout <<"Enter address: ";
    cin >> s.address;
    cout <<"Enter roll no.: ";
    cin >> s.roll;

    cout <<"\nDisplaying Info: "<< endl;
    cout <<"Name= "<< s.name << endl;
    cout <<"Address: "<< s.address << endl;
    cout <<"Roll no: "<< s.roll << endl;
    return 0;
}