#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

// Implementation of different constructors:
// 1. Constructor with parameters
Person::Person(std::string first, std::string last, int arbitrary) :
    firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
    cout << "constructing " << firstname << " " << lastname << endl;
}
// 2. Default constructor - we can initialize only some parameters but we don't have to
Person::Person() : arbitrarynumber(0)
{
    cout << "constructing " << firstname << " " << lastname << arbitrarynumber << endl;
}
// Destructor
Person::~Person()
{
    cout << "desctructing " << firstname << " " << lastname << endl;
}

std::string Person::getName()
{
	return firstname + " " + lastname;
}

// Operator functions implementation
bool Person::operator<(Person const& p) const 
{
    return arbitrarynumber < p.arbitrarynumber;
}

bool Person::operator<(int i) const
{
    return arbitrarynumber < i;
}

bool operator<(int i, Person const& p)
{
    /*Function GetNumber had to be created
    in order to be able to access Person variable
    since this bool function is not member of Person.*/
    return i < p.GetNumber();
    // Or I could define the bool function in header as friend
    // friend bool operator<(int i, Person const& p);
}