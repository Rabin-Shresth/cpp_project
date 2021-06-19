/*WAP to define a class named 
employee with it's data members ID, Name and Salary. Read records of five employees and display the record 
in tabular form [Hint- to make the data display in tabular form, use "/t"(escape sequence) for line spaces]*/

#include <iostream>
using namespace std ;

class employee
{
    public :
        double id ;
        char nam[50] ;
        int salary ;

        void info()
        {
                cout << "\nEnter member id : " ;
                cin >> id ;
                cout << "Enter name: " ;
                cin >> nam ;
                cout << "Enter the salary amount: " ;
                cin >> salary ;
        }
        
        void show()
        {
            cout << "\nName\tMember id\tSalary" << endl ;            
        }
};

int main()
{
    employee em[5] ;
    for (int i = 0; i < 5 ; i++)
    {
        cout << "Enter the details of the employee : " << i+1 << endl ;
        em[i].info() ;        
    }
    for (int i = 0; i < 5 ; i++)
    {
        em[i].show();
        cout << endl ;
    }    
    return 0;
}