#pragma once
#include "Person.h"
#include <string>

class Tweeter : public Person
// Twitter is inhereting objects from Person
{
    private:
        std::string tweeterusername;
    public:
        Tweeter(std::string first,
                std::string last,
                int arbitrary,
                std::string username);
         ~Tweeter();       
};