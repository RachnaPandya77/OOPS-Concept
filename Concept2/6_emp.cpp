/*Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/

// performeance rating 5.5  = salary increase 20%
// performeance rating 4.5  = salary increase 15%
// performeance rating 3.5  = salary increase 10%

#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    double emp_ID;
    double salary;

public:
    Employee(string name, double emp_ID, double salary)
    {
        this->name = name;
        this->emp_ID = emp_ID;
        this->salary = salary;
    }

    // function - performance rating
    void setsalary(double performance)
    {
        if (performance >= 5.5)
        {
            salary = salary * 5.5;
        }
        else if (performance >= 4.5)
        {
            salary = salary * 4.5;
        }
        else if (performance >= 3.5)
        {
            salary = salary * 3.5;
        }
        else
        {
            cout << "How about a little work-cation right at your desk?" << endl;
            cout << endl;
        }
    }

    // function to get name, ID, salary

    string getname()
    {
        return name;
    }

    double getemp_ID()
    {
        return emp_ID;
    }

    double getsalary()
    {
        return salary;
    }
};

int main()
{
    Employee emp("Rachna", 11, 50000);

    emp.setsalary(5.7);

    cout << "----------Details Of Employee-------------" << endl;
    cout << "Employee Name: " << emp.getname() << endl;
    cout << "Employee ID: " << emp.getemp_ID() << endl;
    cout << "Employee Salary: " << emp.getsalary() << endl;

    return 0;
}