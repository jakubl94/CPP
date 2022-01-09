#pragma once
#include <string>

class Person
{
private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;
public:
// Constructor has the same name as the class, constructor has no return type
    Person(std::string first, std::string last, int arbitrary);
    Person(); // Default constructor without parameters 
    ~Person(); // This is a desctructor
    std::string getName(); // Declaration of a function (not definition)
    int GetNumber() const {return arbitrarynumber;}
// Creating logical operator for given class
// 1. Operator takes by const reference
bool operator<(Person const& p) const;
// 2. Operator takes integer
bool operator<(int i) const;
};
// Free function (not member of any class)
/*This is different from the first
operator function, this is for cases when we want to
test something different < our Person class
*/
bool operator<(int i, Person const& p);