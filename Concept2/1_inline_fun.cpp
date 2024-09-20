/*Write a program to find the multiplication values and the cubic values using
inline function*/

// syntax

/*inline return_type function_name(parameter_list) {
    // Function body
}*/

#include <iostream>
using namespace std;

// for mul
inline int mul(int a, int b)
{
    return a * b;
}

// for cubic
inline int cube(int a)
{
    return a * a * a;
}

int main()
{
    int num1, num2;

    cout << "Enter two num: ";
    cin >> num1 >> num2;

    int result = mul(num1, num2); // calculate mul

    int cubevalue = cube(num1);

    cout << "Mul: " << result << endl;
    cout << "cubic result: " << num1 << ": " << cubevalue << endl;

    return 0;
}