#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    int age;

public:
    void setDetails(int rollNo, string name, int age)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s;

    s.setDetails(101, "Riya", 18);
    s.display();

    return 0;
}
