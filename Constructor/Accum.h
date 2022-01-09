#pragma once
#include "Person.h"
// Creating template class
template <class T>
class Accum
{
    private:
        T total;
        // Type of this variable will depend on initialization
    public:
        // Constructor
        Accum(T start): total(start) {};
        // Operator overload for this class
        // Creating
        T operator+=(T const& t){
            return total = total + t;
        }
        // Fucntion to get total since it's private
        T GetTotal() const {return total;}
};

// Creating template specific for Person class
template <>
class Accum<Person>
{
    private:
        int total;
        // Type of this variable will depend on initialization
    public:
        // Constructor
        Accum(int start): total(start) {};
        // Operator overload for this class
        // Creating
        int operator+=(Person const& t){
            return total = total + t.GetNumber();
        };
        // Fucntion to get total since it's private
        int GetTotal() const {return total;}
};