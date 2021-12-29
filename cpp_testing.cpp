
#include <iostream> //input and output library
using std::cout; //for printing
using std::cin; // for getting information

// include functions from header file
#include "functions_cpp.h"

// include string library
#include <string>
using std::string; // standard library for working with strings

// define function, has to be outside the main()
// This function was moved to header and separate file
/*double soucet(double a, double b)
{
    return a + b;
}*/

int main()
{
    int i;
    cout << "Enter a number please: "; // print this on screen
    cin >> i; // save users input and save it to i
    cout << '\n' << i << '\n'; // print i
    std::cout << 20 << '\n';

    //for loops, while, if
    while(i < 10)
    {
    if(i >= 10)
    {
        cout << "It's 10 or bigger than 10!!!" << '\n';
    } else
    {
        cout << i << '\n';
        cout << "It's not bigger than 10!!" << '\n';
        i += 1;
    }
    }

    double result;
    result = soucet(3.1, 4.3);
    cout << result << '\n';

    //String code
    string name;
    cout << "Hello, who are you? Please state your name" << '\n';
    cin >> name;
    string greeting = "Hello, " + name + '!';
    if(name == "Jakub")
    {
        greeting = greeting + " It's been a while!";
        cout << greeting << '\n';
    } else
    {
        cout << greeting << '\n';
    }
    
    int len = greeting.length();
    cout << "\"" + greeting + "\" is " << len << " characters long." << '\n';
    string beginning = greeting.substr(greeting.find(' ') + 1);
    cout << beginning;
}