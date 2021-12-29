#include <vector>
#include <string>
#include "Transaction.h"

class Account
{
private:
    int balance; // private variables are only possible to amend by using public functions from 
    // the same class
    std::vector<Transaction> log;
public:
    Account(); // This is a constructor with no parameter aka default constructor
    std::vector<std::string> Report();
    bool Deposit(int amount);
    bool Withdraw(int amount);
    int GetBalance() {return balance; } //"implemented in line", it's right inside the declaration 
};