#include "Tweeter.h"
#include <iostream>

Tweeter::Tweeter(
    std::string first,
    std::string last,
    int arbitrary,
    std::string username)
    :
    Person(first, last, arbitrary), tweeterusername(username)
    {

    }

Tweeter::~Tweeter()
{
    std::cout << "destructing tweeter " <<
            tweeterusername << std::endl;
}