#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int price;

    // Default constructor
    Book()
    {
        title = "Unknown";
        author = "Unknown";
        price = 0;
    }

    // Parameterized constructor
    Book(string t, string a, int p)
    {
        title = t;
        author = a;
        price = p;
    }

    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book book1;

    Book book2("Wings of Fire", "A.P.J. Abdul Kalam", 400);

    cout << "First Book Details:" << endl;
    book1.display();

    cout << "\nSecond Book Details:" << endl;
    book2.display();

    return 0;
}