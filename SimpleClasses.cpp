#include <iostream>
using std::cout;

#include "Account.h"

int main()
{
    Account a1; // declaraing object of class Account, simple since it has default constructor
    /*On the other hand if constructor has paremeter we need to declare it with
    () or {} brackets.*/
    a1.Deposit(70);
    cout << "Balance is now: " << a1.GetBalance() << '\n';

    for(auto s : a1.Report())
    {
        cout << s << '\n';
    }

    a1.Withdraw(40);
    cout << "Balance is now: " << a1.GetBalance() << '\n';

    for(auto s : a1.Report())
    {
        cout << s << '\n';
    }

    return 0;
}