#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    string course;

    void setDetails(string name, int rollNo, string course)
    {
        this->name = name;
        this->rollNo = rollNo;
        this->course = course;
    }

    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    Student student;

    student.setDetails("Aditi", 48, "AIML");

    student.display();

    return 0;
}