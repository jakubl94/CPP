#include "Transaction.h"

using std::string;
using std::to_string;

// Constructor - THEY HAVE NO RETURN TYPES
Transaction::Transaction(int amt, string kind) : amount(amt), type (kind)
// : sign is only present with constructors and amount(amt) means
// that we are initalizing amount variable which going to be equal to amt
{
}

string Transaction::Report()
{
    string report;
    report += "     ";
    report += type;
    report += " ";
    report += to_string(amount);

    return report;
}