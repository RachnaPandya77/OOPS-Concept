// Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;

class matrix
{
public:
    int *array;
    int size;

    matrix(int n)
    {
        size = n;
        array = new int[size];
    }

    matrix operator+(matrix &a)
    {
        matrix result(size);
        for (int i = 0; i < size; i++)
        {
            result.array[i] = array[i] + a.array[i];
        }
        return result;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n;
    cout << "Size of matrix: ";
    cin >> n;

    matrix A(n), B(n);

    cout << "Element for A: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A.array[i];
    }

    cout << "Element for B: ";
    for (int i = 0; i < n; i++)
    {
        cin >> B.array[i];
    }

    matrix C = A + B;

    cout << "Matrix A: ";
    A.print();

    cout << "Matrix B: ";
    B.print();

    cout << "Matrix C (A + B): ";
    C.print();

    return 0;
}