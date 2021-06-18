/*WAP to define a class in C++ as shown : 
class name - Student attributes - name, roll, address, percentage methods - input(), display()*/

#include <iostream>
using namespace std;

class student
{
    public :
        char name[50] ;
        int roll ;
        char address[100] ;
        int percentage ;

        void input()
        {
            cout << "Enter name: " ;
            gets(name);
            cout << "\nEnter Address: " ;
            gets(address);
            cout << "\nEnter Roll number: " ;
            cin >> roll ;
            cout << "\nEnter Percentage: " ;
            cin >> percentage ;
        }

        void display()
        {
            if (percentage>45)
            {
                cout << "Congratulation!! Here are your Details:" << endl ;
                cout << "Name: " << name << endl ;
                cout << "Roll number: " << roll << endl ;
                cout << "Address: " << address << endl ;
                cout << "Percentage: " << percentage << endl ;
            }
            else
            {
                cout << "Sorry Your score is below 45 %." << endl ;
            }
        }
};
int main()
{
    student st ;
    st.input() ;
    st.display() ;
    return 0;
}