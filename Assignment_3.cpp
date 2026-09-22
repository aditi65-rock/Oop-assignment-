include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int age;
    float salary;

    void setDetails(string n, int a, float s)
    {
        name = n;
        age = a;
        salary = s;
    }

    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;

    e.setDetails("Aditi", 18, 50000);

    e.display