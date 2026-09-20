#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string name;
    string writer;
    int cost;

    // Default Constructor
    Book()
    {
        name = "Unknown";
        writer = "Unknown";
        cost = 0;
    }

    // Parameterized Constructor
    Book(string n, string w, int c)
    {
        name = n;
        writer = w;
        cost = c;
    }

    void show()
    {
        cout << "Book Name: " << name << endl;
        cout << "Writer: " << writer << endl;
        cout << "Cost: " << cost << endl;
    }
};

int main()
{
    // Object using Default Constructor
    Book b1;

    cout << "Book 1:" << endl;
    b1.show();

    cout << endl;

    // Object using Parameterized Constructor
    Book b2("Harry Potter", "J.K. Rowling", 500);

    cout << "Book 2:" << endl;
    b2.show();

    return 0;
}