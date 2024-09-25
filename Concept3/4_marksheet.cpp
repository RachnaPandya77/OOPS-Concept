// Write  C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
using namespace std;

// base class for student
class Student
{
public:
    string name;
    int rollno;

    Student(string name, int rollno) : name(name), rollno(rollno) {}

    void displaystudentinfo()
    {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollno << endl;
    }
};

// base class for mark
class Mark
{
public:
    int mark[3];

    Mark(int mark[])
    {
        for (int i = 0; i < 3; i++)
        {
            this->mark[i] = mark[i];
        }
    }

    void displaymark()
    {
        cout << "Marks of 3 subject: ";
        for (int i = 0; i < 3; i++)
        {
            cout << mark[i] << " ";
        }
        cout << endl;
    }
};

// derived class
class result : public Student, public Mark
{
public:
    result(string name, int rollno, int mark[]) : Student(name, rollno), Mark(mark) {}

    void displaymarksheet()
    {
        displaystudentinfo();
        displaymark();
    }
};

int main()
{
    string name;
    int rollno, mark[3];

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter Rollno: ";
    cin >> rollno;

    cout << "Enter mark for 3 subject: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> mark[i];
    }

    result student(name, rollno, mark);
    student.displaymark();

    return 0;
}