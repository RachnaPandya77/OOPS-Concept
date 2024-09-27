#include <iostream>

using namespace std;

class Hotel
{
public:
    int roomNo;
    double price;

    Hotel(int roomNo, double price)
    {
        this->roomNo = roomNo;
        this->price = price;
        cout << "Room: " << roomNo << " available with price of " << price << endl;
    }
};

class DeluxeRoom : public Hotel
{
public:
    bool hasBalcony;

    DeluxeRoom(int roomNo, double price, bool hasBalcony) : Hotel(roomNo, price)
    {
        this->hasBalcony = hasBalcony;
        cout << "Deluxe Room: " << roomNo << " at " << price << (hasBalcony ? " with balcony " : "") << endl;
    }
};

class SuiteRoom : public DeluxeRoom
{
public:
    bool hasSeparateLivingArea;

    SuiteRoom(int roomNo, double price, bool hasBalcony, bool hasSeparateLivingArea) : DeluxeRoom(roomNo, price, hasBalcony)
    {
        this->hasSeparateLivingArea = hasSeparateLivingArea;
        cout << "Suite Room: " << roomNo << " at " << price << " with " << (hasSeparateLivingArea ? "separate living area" : "") << endl;
    }
};

int main()
{
    SuiteRoom sr(111, 6000, true, true);
    return 0;
}