#include <iostream>
#include <string>
#include "Person.h"
using std::cout;
using std::endl;


int main()
{
    int a = 3;
    cout << "a is " << a << endl;
    // This is reference - reference needs to be initialized when created, hence we initialize it to a
    // since it is a reference rA and a are the same
    int& rA = a;
    rA = 5;
    cout << "a is " << a << endl;

    // Testing objects
    Person Test("Jakub", "Second", 123);
    // Create reference objects
    Person& rTest = Test;
    rTest.SetNumber(99999);
    cout << "rTest: " << rTest.GetNumber() << endl;
    cout << "Test: " << Test.GetNumber() << endl;


    // Pointers
    int* pA = &a;
    // Dereference *pA to 4
    *pA = 4;
    cout << "a is " << a << endl;
    int b = 100;
    pA = &b; // pA is adress of b (& is adress)
    (*pA)++;
    cout << "b is: " << b << endl;
    cout << "a is: " << a << " and pA is: " << *pA << endl;
    cout << "adress of b is: " << &b << " and pointer points to" << pA << endl;

    // Pointer to objects
    Person* pTest = &Test;
    (*pTest).SetNumber(999999);// Old syntax
    pTest->SetNumber(456789);
    cout << Test.getName() << " " << Test.GetNumber() << endl;
    cout << pTest->getName() << " " << pTest->GetNumber() << endl;

}