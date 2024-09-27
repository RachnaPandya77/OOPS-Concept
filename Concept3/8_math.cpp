/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/

#include <iostream>
using namespace std;

class calculator
{
public:
    int a;
    int b;
    // Function overloading for addition
    int add(int a, int b)
    {
        return a + b;
        cout << "Additiom " << add(a, b) << endl;
    }

    double add(double a, double b)
    {
        return a + b;
        cout << "Additiom " << add(a, b) << endl;
    }

    // Function overloading for substraction
    int sub(int a, int b)
    {
        return a - b;
        cout << "substraction " << sub(a, b) << endl;
    }

    double sub(double a, double b)
    {
        return a - b;
        cout << "substraction " << sub(a, b) << endl;
    }

    // Function overloading for multiplication
    int mul(int a, int b)
    {
        return a * b;
        cout << "miltiplication " << mul(a, b) << endl;
    }

    double mul(double a, double b)
    {
        return a * b;
        cout << "miltiplication " << mul(a, b) << endl;
    }

    // Function overloading for divisiom
    int divi(int a, int b)
    {
        return a / b;
        cout << "division " << divi(a, b) << endl;
    }

    double divi(double a, double b)
    {
        return a / b;
        cout << "division " << divi(a, b) << endl;
    }
};

int main()
{
    int a, b;

    // for int function

    cout << "Enter two number: ";
    cin >> a >> b;

    calculator c1;

    cout << "Result: " << c1.add(a, b) << endl;

    c1.add(a, b);

    return 0;
}