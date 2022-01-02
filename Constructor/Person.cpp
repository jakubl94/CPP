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
    cout << "constructing " << firstname << " " << lastname << endl;
}

Person::~Person()
{
    cout << "desctructing " << firstname << " " << lastname << endl;
}

std::string Person::getName()
{
	return firstname + " " + lastname;
}