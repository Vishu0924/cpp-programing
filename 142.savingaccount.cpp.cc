#include <iostream>
#include <string>
using namespace std;

// Saving Account Class
class SavingAccount
{
private:
    string accName;
    int accNo;
    float balance;
    float interestRate;

public:
    // Parameterized Constructor
    SavingAccount(string name, int no, float bal, float rate)
    {
        accName = name;
        accNo = no;
        balance = bal;
        interestRate = rate;
    }

    // Deposit
    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount Deposited Successfully.\n";
    }

    // Withdraw
    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount Withdrawn Successfully.\n";
        }
        else
        {
            cout << "Insufficient Balance.\n";
        }
    }

    // Calculate Interest
    void applyInterest()
    {
        float interest = balance * interestRate / 100;
        balance = balance + interest;
        cout << "Interest Added = " << interest << endl;
    }

    // Account Statement
    void display()
    {
        cout << "\n--- Saving Account Statement ---\n";
        cout << "Account Name : " << accName << endl;
        cout << "Account No   : " << accNo << endl;
        cout << "Balance      : " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};


// Checking Account Class
class CheckingAccount
{
private:
    string accName;
    int accNo;
    float balance;
    float transactionFee;

public:
    // Parameterized Constructor
    CheckingAccount(string name, int no, float bal, float fee)
    {
        accName = name;
        accNo = no;
        balance = bal;
        transactionFee = fee;
    }

    // Deposit
    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount Deposited Successfully.\n";
    }

    // Withdraw with Transaction Fee
    void withdraw(float amount)
    {
        float total = amount + transactionFee;

        if (total <= balance)
        {
            balance = balance - total;
            cout << "Amount Withdrawn Successfully.\n";
            cout << "Transaction Fee = " << transactionFee << endl;
        }
        else
        {
            cout << "Insufficient Balance.\n";
        }
    }

    // Account Statement
    void display()
    {
        cout << "\n--- Checking Account Statement ---\n";
        cout << "Account Name : " << accName << endl;
        cout << "Account No   : " << accNo << endl;
        cout << "Balance      : " << balance << endl;
        cout << "Transaction Fee: " << transactionFee << endl;
    }
};


// Main Function
int main()
{
    // Saving Account Object
    SavingAccount saving("Vishwajeet Shelake ", 101, 10000, 5);

    saving.deposit(2000);
    saving.withdraw(1000);
    saving.applyInterest();
    saving.display();

    // Checking Account Object
    CheckingAccount checking("Vishwajeet Shelake ", 102, 10000, 50);

    checking.deposit(2000);
    checking.withdraw(1000);
    checking.display();

    return 0;
}
