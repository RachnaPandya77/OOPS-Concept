/*.Write a program to find the max number from given two numbers
using friend function*/

#include <iostream>

using namespace std;

class MaxNumbers
{
private:
    int a, b;

public:
    MaxNumbers(int x, int y) : a(x), b(y) {}

    friend int findMax(MaxNumbers &num);

    void display()
    {
        cout << "Num1: " << a << endl;
        cout << "Num2: " << b << endl;
    }
};

int findMax(MaxNumbers &num)
{
    return num.a > num.b ? num.a : num.b;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    MaxNumbers num(num1, num2);

    cout << "Before finding max:\n";
    num.display();

    int maxNum = findMax(num);

    cout << "Maximum number: " << maxNum << endl;

    return 0;
}