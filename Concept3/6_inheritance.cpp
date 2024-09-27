// Write a C++ Program to show access to Private Public and Protected using
// Inheritance

#include <iostream>
using namespace std;

class Employee
{
public:
    Employee(string name, int id, double salary)
    {
        this->name = name;
        this->id = id;
        this->salary = salary;
    }

    void displayinfo()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }

protected:
    string name;
    int id;

private:
    double salary;
};

//derived class        //base class
class manager : public Employee
{
public:
    manager(string name, int id, double salary, string department) : Employee(name, id, salary)
    {
        this->department = department;
    }

    void displayinfo()
    {
        Employee::displayinfo();
        cout << "Department: " << department << endl;
    }

private:
    string department;
};

int main()
{
    Employee emp("rachna", 1, 50000);
    emp.displayinfo();

    //access private member from manager class 
    manager mg("Ruchi", 01, 700000, "IT");
    mg.displayinfo();

    return 0;
}
