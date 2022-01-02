#include "Person.h"
#include <iostream>

int main()
{
    Person p1("Jakub", "Lunga", 123);
    {
        Person p2;
    }
    //std::cout << p1.GetName();

    return 0;
}