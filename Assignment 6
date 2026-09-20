#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int id;

    Employee()
    {
        cout << "Employee record created." << endl;
    }

    ~Employee()
    {
        cout << "Employee record removed from memory." << endl;
    }

    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }
};

int main()
{
    Employee e;

    e.name = "Aditi";
    e.id = 101;

    e.display();

    return 0;
}