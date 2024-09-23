/*Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/

#include <iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    date()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    void setday(int d)
    {
        if (d >= 1 && d <= 31)
        {
            day = d;
        }
        else
        {
            cout << "Not valid" << endl;
        }
    }

    void setmonth(int m)
    {
        if (m >= 1 && m <= 12)
        {
            month = m;
        }
        else
        {
            cout << "Not valid" << endl;
        }
    }

    void setyear(int y)
    {
        year = y;
    }

    int getday()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }
};

int main()
{

    return 0;
}