#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Sets the initial account information.
    void setAccountInformation(int number, string holder, double amount)
    {
        accountNumber = number;
        accountHolder = holder;

        if (amount >= 0)
            balance = amount;
        else
            balance = 0;
    }

    // Adds money if the amount is positive.
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit successful." << endl;
        }
        else
        {
            cout << "Invalid amount." << endl;
        }
    }

    // Withdraws money only when the balance is sufficient.
    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid amount." << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        }
    }

    // Returns the private balance.
    double getBalance()
    {
        return balance;
    }

    // Displays account information.
    void displayAccountInformation()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << getBalance() << endl;
    }
};

int main()
{
    // Creating two independent bank account objects.
    BankAccount account1, account2;

    account1.setAccountInformation(101, "Reham", 5000);
    account2.setAccountInformation(102, "Pervez", 3000);

    cout << "Account 1 Transactions:" << endl;
    account1.deposit(3000);
    account1.withdraw(2000);

    cout << "\nAccount 2 Transactions:" << endl;
    account2.deposit(2500);
    account2.withdraw(4000);
    cout << "\nAccount 1 Information:" << endl;
    account1.displayAccountInformation();

    cout << "\nAccount 2 Information:" << endl;
    account2.displayAccountInformation();

    // balance is private, so it cannot be changed directly from main().
    // account1.balance = 10000;
    // This line would cause a compilation error.

    return 0;
}
