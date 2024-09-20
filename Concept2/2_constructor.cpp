/*Write a program of Addition, Subtraction, Division, Multiplication using
constructor*/

/*class ClassName {
public:
    ClassName(parameter_list) {
        // Constructor body
    }
};*/

#include <iostream>
using namespace std;

class calculate
{
private:
    double num1;
    double num2;

public:
    calculate(double num1, double num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    double add()
    {
        return num1 + num2;
    }

    double subtract()
    {
        return num1 - num2;
    }

    double division()
    {
        return num1 / num2;
    }

    double multiplication()
    {
        return num1 * num2;
    }
};

int main()
{
    double number1, number2;

    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    calculate calculate(number1, number2);

    cout << "Addition: " << calculate.add() << endl;
    cout << "Subtraction: " << calculate.subtract() << endl;
    cout << "Division: " << calculate.division() << endl;
    cout << "Multiplication: " << calculate.multiplication() << endl;

    return 0;
}