#include <iostream>
using namespace std;

class Employee
{
public:
    Employee()
    {
        cout << "Employee record created." << endl;
    }

    ~Employee()
    {
        cout << "Employee record removed from memory." << endl;
    }
};

int main()
{
    Employee emp;

    cout << "Processing employee record..." << endl;

    return 0;
}
