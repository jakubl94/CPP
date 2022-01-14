#include "Person.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;

int DoubleIt(int const& number)
{
    return number*2;
}

int main()
{
    int i = 3;

    int const ci = 3;
    i = 4; // This is ok
    //ci = 10; This is NOT ok, since we defined ci as a constant

    // Define reference with &
    // ri then basically becomes an alternative name
    int& ri = i;
    cout << "This is ri value: " << ri << endl;
    cout << "This is i values: " << i << endl;
    // Define const reference
    int const & cri = i;
    // cri = 120; This CANNOT be done, since cri is const reference
    // We can reference it but we cannot change it
    i = 30;
    cout << "i is: " << i << " and cri is: " << cri << endl;
    /* We can change i and hence cri changes as well
    but we cannot directly change cri.*/
    
    //int& ncri = ci;
    /* This line tries to create new reference ncri from ci
    but ncri is not const. Hence if this was possible we would
    be able to change ci which is wrong becuase ci is const.
    That's why this line of code resolves in compiler error.*/

    int j = 10;
    int DoubleJ = DoubleIt(j);
    cout << j << endl;
    int DoubleTen = DoubleIt(10);
    /* If DoubleItI() had parameter only by reference
    int&  DoubleTen would not work because it would try to
    change 10 to something different but 10 is 10.
    Adding const allow us to change literrals.*/
    
    // Pointers
    int* pI = &i;
    cout << "pI is: " << pI << endl;
    cout << "*pI is: " << *pI << endl;

    /* This is not legal because pointer is of type
    int* but value of i is of type int.*/
    //int* p2I = i;
    //cout << "p2I is: " << p2I << endl;
    //cout << "*p2I is: " << *p2I << endl;

    int const * pcI = pI; // Pointer to a const
    /* Meaning you can change the adrres of the pointer
    but you cannot dereference the value. We can read the const
    from left meaning the integer is const not the pointer.*/
    // This is legal
    pcI = &j;
    cout << "pI value and adress respctively: " << *pI << " " << pI << endl;
    cout << "pcI value and adress respctively: " << *pcI << " " << pcI << endl;
    // Not legal
    //*pcI = 220;

    int * const cpI = pI; // Const pointer
    cout << "cpI value and adress respctively: " << *cpI << " " << cpI << endl;
    *cpI = 111;
    cout << "cpI value and adress respctively after dereferencing: " << *cpI << " " << cpI << endl;
    cout << "pI value: " << *pI << endl;

    int const * const cc = pI; // Const poineter to const
    /*We cannot change the value we cannot change the adress*/
    //*cc = 4;
    //cc = &j;
    // We can though assign *cc value to some variable
    int test = *cc;
    
    return 0;

}