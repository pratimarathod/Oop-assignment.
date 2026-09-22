#include <iostream>
using namespace std;

class Employee
{
private:
    int employeeID;
    string name;
    string department;
    float salary;

public:
    void getDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Department: ";
        cin >> department;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDetails()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee emp;

    emp.getDetails();
    emp.displayDetails();

    return 0;
}
