#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
    Person p1("Jakub", "Something", 123);
    {
        Person p2;
        
    }
    cout << "After innermost block of Person p1" << endl;
    string name = p1.getName();
    cout << name << endl;

    return 0;
}