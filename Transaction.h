#include <string>

class Transaction
{
private:
    int amount;
    std::string type;

public:
    // This is a constructor with 2 parameters
    Transaction(int amt, std::string kind);
    // Function which returns string
    std::string Report();
};