/*Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information*/

#include <iostream>
using namespace std;

class student
{
private:
    string name;
    string classs;
    int roll_num;
    float mark;

public:
    student(string n, string c, int r, float m)
    {
        name = n;
        classs = c;
        roll_num = r;
        mark = m;
    }

    // function
    char grade()
    {
        if (mark >= 90)
        {
            return 'A';
        }
        else if (mark >= 80)
        {
            return 'B';
        }
        else if (mark >= 70)
        {
            return 'C';
        }
        else if (mark >= 60)
        {
            return 'D';
        }
        else if (mark >= 50)
        {
            return 'E';
        }
        else
        {
            return 'F';
        }
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Class: " << classs << endl;
        cout << "Roll Num: " << roll_num << endl;
        cout << "Mark: " << mark << endl;
        cout << "Grade: " << grade() << endl;
    }
};

int main()
{
    string name, classs;
    int roll_num, mark;

    cout << "Enter Student Details " << endl;
    cout << "Name: ";
    cin >> name;

    cout << "Class: ";
    cin >> classs;

    cout << "Roll Num: ";
    cin >> roll_num;

    cout << "Marks: ";
    cin >> mark;

    student stu(name, classs, roll_num, mark);

    cout << "\nStudent Info";
    stu.display();

    return 0;
}