#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
    Person n1("Name1", "Lastname1", 1);
    Person n2("Name2", "Lastname2", 2);

    if(!(n1 < n2))
    {
        cout << n1.GetNumber() << " is not lower than " << n2.GetNumber() << endl;    
    } else 
    {  
        cout << n1.GetNumber() << " is lower than " << n2.GetNumber() << endl;    
    }

    if(!(100 < n2))
    {
        cout << "100" << " is not lower than " << n2.GetNumber() << endl;  
    } else 
    {  
         cout << "100" << " is lower than " << n2.GetNumber() << endl;  
    }

    if(!(n1 < 0))
    {
        cout << n1.GetNumber() << " is not lower than " << "0" << endl;  
    } else 
    {  
        cout << n1.GetNumber() << " is not lower than " << "0" << endl; 
    }
    
    return 0;
}