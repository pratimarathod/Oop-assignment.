#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    float price;

public:
    // Default constructor
    Book()
    {
        title = "Unknown";
        author = "Unknown";
        price = 0;
    }

    // Parameterized constructor
    Book(string t, string a, float p)
    {
        title = t;
        author = a;
        price = p;
    }

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book book1;
    Book book2("C++ Programming", "Balagurusamy", 500);

    cout << "Book 1:" << endl;
    book1.display();

    cout << "\nBook 2:" << endl;
    book2.display();

    return 0;
}
