// WAP to create simple calculator using class

#include <iostream>
using namespace std;

class calculator
{
public:
    int sum(int a, int b, char op)
    {
        switch (op)
        {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            cout << "invalid op";
        }
    }
};
int main()
{
    calculator  cal;
    //(class)   //(obj)
    int a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter op: ";
    cin >> op;

    cout << "result " << cal.sum(a, b, op) << endl;

    return 0;
}