/*Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables. */

#include <iostream>
using namespace std;

class person
{
private:
    string name;
    int age;
    string country;

public:
    // constructor
    person(string n, int a, string c)
    {
        name = n;
        age = a;
        country = c;
    }

    // getter function
    string getname()
    {
        return name;
    }

    int getage()
    {
        return age;
    }

    string getcountry()
    {
        return country;
    }

    // setter function
    string setname(string n)
    {
        name = n;
    }

    int setage(int a)
    {
        age = a;
    }

    string setcountry(string c)
    {
        country = c;
    }
};

int main()
{
    string name, country;
    int age;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter country: ";
    cin >> country;

    // class obj
    person Person(name, age, country);

    cout << "----------------------------------------" << endl;
    cout << "Candidate Name is " << Person.getname() << endl;
    cout << "Candidate Age is " << Person.getage() << endl;
    cout << "Live In  " << Person.getcountry() << endl;

    return 0;
}