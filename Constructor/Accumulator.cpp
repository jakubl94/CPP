#include "Accum.h"
#include "Person.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main()
{
    /*This is how we create variable with nam "integers"
    from Accum class and say that's an integer <int>*/
    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    cout << integers.GetTotal() << endl;

    /*Creating also string variable of class Accum*/
    Accum<string> strings("");
    strings += "Hello ";
    strings += "World!";
    cout << strings.GetTotal() << endl;

    /*Creating Accum of class Person - template specialization*/
    Accum<Person> people(0);
    Person p1("Kate", "Test", 1);
    Person p2("John", "Test2", 2);
    people += p1;
    people += p2;
    cout << people.GetTotal() << endl; 

    return 0;


    

}