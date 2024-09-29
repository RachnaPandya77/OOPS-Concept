#include <iostream>
using namespace std;

// rectangle
double arearec(double length, double breadth)
{
    return length * breadth;
}

// triangle
double areatri(double base, double height)
{
    return 0.5 * base * height;
}

// circle
const double pi = 3.14;
double areacircle(double radius)
{
    return pi * radius * radius;
}

int main()
{
    double length, breadth, base, height, radius;

    cout << "Enter length and breadth for Rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle " << arearec(length, breadth) << endl;

    cout << "Enter base and height for triangle: ";
    cin >> base >> height;
    cout << "Area of triangle " << areatri(base, height) << endl;

    cout << "Enter radius for Circle: ";
    cin >> radius;
    cout << "Area of circle " << areacircle(radius) << endl;

    return 0;
}