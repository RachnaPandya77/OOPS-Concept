// Write a C++ Program to find Area of Rectangle using inheritance
// Area = Length × Width

#include <iostream>
using namespace std;

class Rectangle
{
public:
    double area()
    {
        return 0.0;
    }
};

class rec : public Rectangle
{
public:
    double length, width;

    rec(double l, double w)
    {
        length = l;
        width = w;
    }

    double area()
    {
        return length * width;
    }
};

int main()
{
    double area;

    rec r1(5, 3);
    r1.area();
    cout << "Area of Rectangle: " << area << endl;

    return 0;
}