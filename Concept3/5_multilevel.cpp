/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/

// class student : rollno
// class test : mark_2_sub(student)
// class result : totalmark(test,student)

#include <iostream>
using namespace std;

class student
{
public:
    int rollno;

    student(int rollno) : rollno(rollno) {}

    int getrollno()
    {
        return rollno;
    }
};

class test : public student
{
public:
    int mark1;
    int mark2;

    test(int rollno, int mark1, int mark2) : student(rollno), mark1(mark1), mark2(mark2) {}

    int get_totalmark()
    {
        return mark1 + mark2;
    }
};

class result : public test
{
public:
    result(int rollno, int mark1, int mark2) : test(rollno, mark1, mark2) {}

    void displayresult()
    {
        cout << "Roll No: " << getrollno() << endl;
        cout << "mark1: " << mark1 << endl;
        cout << "mark2: " << mark2 << endl;
        cout << "Total Mark: " << get_totalmark() << endl;
    }
};

int main()
{
    int rollno, mark1, mark2;

    cout << "Enter Roll No: ";
    cin >> rollno;

    cout << "Enter Mark1: ";
    cin >> mark1;

    cout << "Enter Mark2: ";
    cin >> mark2;

    result s1(rollno, mark1, mark2);
    s1.displayresult();

    return 0;
}
