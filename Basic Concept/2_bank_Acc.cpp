// Define a class to represent a bank account. Include the following members:
//            Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account
//          Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance

#include <iostream>

using namespace std;

class bank_account
{
public:

    
    bank_account(string name, int accountNo, string accountType, int balance)
    {
        this->name = name;
        this->accountNo = accountNo;
        this->accountType = accountType;
        this->balance = balance;
    }

    void deposit(int amount)
    {
        balance = balance + amount;
    }

    void withdraw(int amount)
    {
        balance = balance - amount;
    }

    void display()
    {
        cout << "Name:" << name << endl;
        cout << "account Number:" << accountNo << endl;
        cout << "account Type:" << accountType << endl;
        cout << "balance:" << balance << endl;
    }

private:
    string name;
    int accountNo;
    string accountType;
    int balance;
};

int main()
{
    bank_account account("Rachna", 9999, "Saving", 25000);

    account.deposit(1000);
    account.withdraw(2000);
    account.display();

    return 0;
}
