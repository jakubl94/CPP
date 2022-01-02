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
};