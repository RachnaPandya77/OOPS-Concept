#include <iostream>
#include <string>

using namespace std;

class mystring
{
public:
    string str;

    mystring(string s) : str(s) {}

    mystring operator+(mystring a)
    {
        return mystring(str + a.str);
    }

    friend ostream &operator<<(ostream &os, const mystring &mystring)
    {
        return os << mystring.str;
    }
};

int main()
{
    mystring str1("My name is ");
    mystring str2("Rachna!");

    mystring result = str1 + str2;

    cout << result << endl;

    return 0;
}