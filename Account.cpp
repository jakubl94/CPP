#include "Account.h"
using std::vector;
using std::string;
using std::to_string;

// This is a constructure
/*We are saying that Account() is of a class Account. : is only used with constructors.
Account has 2 member varialbes but we are only setting up one because vector of our log variable
has it's constructor so we don't care about that.*/
Account::Account() : balance(0)
{
}

/*"::" is scope resolution operator. Declaration of the function is done in
header file but definition of the function is done in .cpp file.*/
vector<string> Account::Report()
{
    vector<string> report;
    report.push_back("Balance is " + to_string(balance));
    report.push_back("Transactions: ");
    /*log is a vector of transactions*/
    for(auto t : log)
    {
        report.push_back(t.Report());
    }
    report.push_back("-----------------");
    return report;
}

bool Account::Deposit(int amount)
{
    if(amount >= 0)
    {
        balance += amount;
        log.push_back(Transaction(amount, "Deposit"));
        return true;
    } else
    {
        return false;
    }
}

bool Account::Withdraw(int amount)
{
    if(amount < 0)
    {
        return false;
    }

    if(balance >= amount)
    {
        balance -= amount;
        log.push_back(Transaction(amount, "Withdraw"));
        return true;
    } else
    {
        return false;
    }
}