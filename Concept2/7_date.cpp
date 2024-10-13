/*Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/

#include <iostream>
using namespace std;

class Date
{
private:
    int day, month, year;

public:
    Date(int day = 1, int month = 1, int year = 1900)
    {
        setDay(day);
        setMonth(month);
        setYear(year);
    }

    void setDay(int day)
    {
        if (day >= 1 && day <= 31)
        {
            this->day = day;
        }
        else
        {
            cout << "Invalid day: " << day << endl;
        }
    }

    int getDay()
    {
        return day;
    }

    void setMonth(int month)
    {
        if (month >= 1 && month <= 12)
        {
            this->month = month;
        }
        else
        {
            cout << "Invalid month: " << month << endl;
        }
    }

    int getMonth() const
    {
        return month;
    }

    void setYear(int year)
    {
        if (year >= 1900)
        {
            this->year = year;
        }
        else
        {
            cout << "Invalid year: " << year << endl;
        }
    }

    int getYear() const
    {
        return year;
    }

    void display()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    Date d1(02, 44, 1999);

    d1.display();

    return 0;
}