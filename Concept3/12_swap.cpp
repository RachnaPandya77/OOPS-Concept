#include <iostream>

using namespace std;

class Swap
{
private:
    int a, b;

public:
    Swap(int x, int y) : a(x), b(y) {}

    friend void swap(Swap &num);

    void display()
    {
        cout << "Num1: " << a << endl;
        cout << "Num2: " << b << endl;
    }
};

void swap(Swap &num)
{
    num.a = num.a + num.b;
    num.b = num.a - num.b;
    num.a = num.a - num.b;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Swap num(num1, num2);

    cout << "Before swapping:\n";
    num.display();

    swap(num);

    cout << "After swapping:\n";
    num.display();

    return 0;
}