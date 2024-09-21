/*Write C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.*/

#include <iostream>
using namespace std;

class triangle
{
private:
    float r_length;
    float l_length;
    float b_length;

public:
    triangle(float r, float l, float b)
    {
        r_length = r;
        l_length = l;
        b_length = b;
    }

    // function
    string result()
    {
        if (r_length == l_length && l_length == b_length)
        {
            return "equilateral";
        }
        else if (r_length == l_length || r_length == b_length || l_length == b_length)
        {
            return "isosceles";
        }
        else
        {
            return "scalene";
        }
    }
};

int main()
{
    float r_length, l_length, b_length;

    cout << "Enter the lengths of the three sides: ";
    cin >> r_length >> l_length >> b_length;

    triangle Tri(r_length, l_length, b_length);

    string classification = Tri.result();

    cout << "The triangle is " << classification << endl;

    return 0;
}