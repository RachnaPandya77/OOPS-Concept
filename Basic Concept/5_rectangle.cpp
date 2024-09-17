/*Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/

#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double length;

public:
    // constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // getter function
    double getlength()
    {
        return length;
    }

    double getwidth()
    {
        return width;
    }

    // setter function
    double setlength(double l)
    {
        length = l;
    }

    double setwidth(double w)
    {
        width = w;
    }

    // member function -- area
    double rec_area()
    {
        return length * width;
    }

    // member function -- perimeter
    double rec_perimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << endl;

    Rectangle rec(length, width);

    cout << "Area of Rec: " << rec.rec_area() << endl;
    cout << "Perimeter of rec: " << rec.rec_perimeter() << endl;

        return 0;
}