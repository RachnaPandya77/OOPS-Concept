/*Write a C++ program to implement a class called Circle that has private
member variables for radius.
------member functions-------
to calculate the
circle's area and circumference.*/

#include <iostream>

using namespace std;

class circle
{
private:
    double radius;

public:
    double area;
    double circumference;
    double pi = 3.14;

    // constrctor
    circle(double r, double a, double c)
    {
        radius = r;
        area = a;
        circumference = c;
    }

    // member function -- circle area
    double circle_area()
    {
        return pi * radius * radius;
    }

    // member function -- circle circumference
    double circle_circumference()
    {
        return 2 * pi * radius;
    }
};

int main()
{
    double radius, area, circumference;

    cout << "Radius of circle: ";
    cin >> radius;
    cout << endl;

    circle fullcircle(radius, area, circumference);

    cout << "Area of circle: " << fullcircle.circle_area() << endl;
    cout << "Area of circumference: " << fullcircle.circle_circumference() << endl;

    return 0;
}