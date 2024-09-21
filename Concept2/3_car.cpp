/*Write  C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/

#include <iostream>
using namespace std;

class car
{
private:
    string company;
    string model;
    int year;

public:
    car(string company, string model, int year)
    {
        this->company = company;
        this->model = model;
        this->year = year;
    }

    string getcompany()
    {
        return company;
    }

    void setcompany(string company)
    {
        this->company = company;
    }

    string getmodel()
    {
        return model;
    }

    void setmodel(string model)
    {
        this->model = model;
    }

    int getyear()
    {
        return year;
    }

    void setyear(int year)
    {
        this->year = year;
    }
};

int main()
{
    car mycar("TATA", "Naxon", 2024);

    cout << "Company Name: " << mycar.getcompany() << endl;
    cout << "Model: " << mycar.getmodel() << endl;
    cout << "Year: " << mycar.getyear() << endl;
    cout << endl;

    mycar.setcompany("volkswagen");
    mycar.setmodel("Golf R");
    mycar.setyear(2023);

    cout << "Updated Company Name: " << mycar.getcompany() << endl;
    cout << "Updated Model: " << mycar.getmodel() << endl;
    cout << "Updated Year: " << mycar.getyear() << endl;

    return 0;
}