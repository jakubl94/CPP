#include "Person.h"
#include "Tweeter.h"
#include "Status.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
    Person p1("Jakub", "Lunga", 123);
    {
        Tweeter t1("Someone", "Else", 456, "@dontcare");
    }
    cout << "after innermost block " << endl;
    string name = p1.getName();


    //std::cout << p1.GetName();
    int test = 3;
    if(test == 3){
        cout << "The number is 3!" << endl;
    } else {
        cout << "The number is not 3!" << endl;
    }

    int test2 = 2;
    switch (test2)
    {
        case 1:
           cout << "It's TRUE!" << endl;
           break;
        case 2:
            cout << "It's not TRUE!" << endl;
            break; 
        default:
            cout << "Just some default" << endl;      
    }

    Status s = Pending;
    s = Approved;
    //The error is here becuase class enum was added into c++ in 2011
    //Therefore, if I want to compile this without any errors I need change the stnadard compiler
    //clang++ ClassesAndObjects.cpp Person.cpp Twitter.cpp -std=c++11

    FileError fe = FileError::notfound;
    fe = FileError::ok;
    NetworkError ne = NetworkError::disconnected;
    ne = NetworkError::ok;

    return 0;
}