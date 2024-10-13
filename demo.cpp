#include <iostream>
#include <string>

class Person
{
public:
    std::string name;
    int age;

    Person(std::string name = "", int age = 0)
    {
        this->name = name;
        this->age = age;
    }

    void read()
    {
        std::cout << "Enter name: ";
        std::getline(std::cin, name);
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    void write() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : public Person
{
public:
    float percentage;

    Student(std::string name = "", int age = 0, float percentage = 0) : Person(name, age)
    {
        this->percentage = percentage;
    }

    void read()
    {
        Person::read();
        std::cout << "Enter percentage: ";
        std::cin >> percentage;
    }

    void write() const
    {
        Person::write();
        std::cout << "Percentage: " << percentage << std::endl;
    }
};

class Teacher : public Person
{
public:
    float salary;

    Teacher(std::string name = "", int age = 0, float salary = 0) : Person(name, age)
    {
        this->salary = salary;
    }

    void read()
    {
        Person::read();
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }

    void write() const
    {
        Person::write();
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main()
{
    Student s("Alice", 20, 90.0);
    Teacher t("Bob", 35, 50000.0);

    s.read();
    s.write();

    t.read();
    t.write();

    return 0;
}