/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/

#include <iostream>
using namespace std;

class cricketer
{
public:
    void inputdata()
    {
    }
    void displaydata()
    {
        cout << endl;
        cout << "Cricketer Name: Virat Kohli" << endl;
    }
};

class batsman : public cricketer
{
public:
    int totalrun;
    int averagerun;
    int bestperformance;

    void inputdata()
    {
        cricketer::inputdata();
        cout << "Enter Total Run ";
        cin >> totalrun;

        cout << "Enter Average Run ";
        cin >> averagerun;

        cout << "Enter Best Performance ";
        cin >> bestperformance;
    }

    void calculateaverage()
    {
    }

    void displaydata()
    {
        cricketer::displaydata();
        cout << "Total Run: " << totalrun << endl;
        cout << "Average Run: " << averagerun << endl;
        cout << "Best Performance: " << bestperformance << endl;
    }
};

int main()
{
    batsman bat;
    bat.inputdata();
    bat.calculateaverage();

    bat.displaydata();

    return 0;
}