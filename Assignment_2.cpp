#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string course;
    int rollNo;

public:
    void inputDetails() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter course: ";
        getline(cin, course);

        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayDetails() {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student student;

    student.inputDetails();
    student.displayDetails();

    return 0;
}
