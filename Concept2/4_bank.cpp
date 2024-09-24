/*Write C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/

#include <iostream>
using namespace std;

class BankAccount
{
private:
    double ac_num;
    double ac_balance;

public:
    BankAccount(int number) //constructor
    {
        ac_num = number;
        ac_balance = 0.0;
    }

    // function
    void deposit(double amount)
    {
        ac_balance += amount;
        cout << "Deposited " << amount << " to account " << ac_num << " New balance: " << ac_balance << endl;
    }

    void withdraw(double amount)
    {
        ac_balance -= amount;
        cout << "Withdraw " << amount << " from account " << ac_num << " New balance: " << ac_balance << endl;
    }

    double getac_balance()
    {
        return ac_balance;
    }
};

int main()
{
    BankAccount myaccount(102030);

    myaccount.deposit(25000);
    myaccount.withdraw(5000);

    cout << "Final Balance: " << myaccount.getac_balance() << endl;

    return 0;
}