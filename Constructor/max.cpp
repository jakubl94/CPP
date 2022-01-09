
#include "BankAccount.h"
#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

/*Max function which works with
placeholrder type T*/
template <class T>
T max(T const& t1, T const&  t2)
{
    return t1 < t2? t2: t1;
}

int main()
{
    cout << "Max of two numbers:" << endl;
    cout << max(13, 43) << endl;
    Person p1("Jakub", "Second", 123);
    Person p2("Jan", "Third", 4);
    cout << "Comparing two Person objects: " <<
        p1.getName() << " and " << p2.getName() << endl;
    cout << "The result of 2 Person classes is: " << max(p1, p2).getName() << endl;
 
    BankAccount b1;
    BankAccount b2;
    cout << max(b1, b2).GetHolderName() << endl;
    return 0;
}