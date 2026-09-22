#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string employeeName;
    int employeeCode;
    string jobRole;
    double monthlySalary;

    void display()
    {
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee Code: " << employeeCode << endl;
        cout << "Job Role: " << jobRole << endl;
        cout << "Monthly Salary: " << monthlySalary << endl;
    }
};

int main()
{
    Employee e;

    e.employeeName = "Aditi";
    e.employeeCode = 205;
    e.jobRole = "Software Developer";
    e.monthlySalary = 55000;

    e.display();

    return 0;
}