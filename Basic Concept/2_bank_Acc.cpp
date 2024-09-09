// Define a class to represent a bank account. Include the following members:
// Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account
// Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance

#include <iostream>

using namespace std;

class BankAccount
{
public:
    BankAccount()

        BankAccount(string name, int accountNumber, string accountType, double balance)
    {
        this->name = name;
        this->accountNumber = accountNumber;
        this->accountType = accountType;
        this->balance = balance;
    }

    void assignValues(string name, int accountNumber, string accountType, double balance)
    {
        this->name = name;
        this->accountNumber = accountNumber;
        this->accountType = accountType;
        this->balance = balance;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient funds." << endl;
        }
    }

    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }

private:
    string name;
    int accountNumber;
    string accountType;
    double balance;
};

int main()
{
    BankAccount account;

    account.assignValues("John Doe", 12345, "Savings", 1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    account.displayDetails();

    return 0;
}
