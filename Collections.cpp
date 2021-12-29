
#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

#include <vector>
using std::vector;
using std::begin;
using std::end;

#include <algorithm>
using std::sort;
using std::count;

int main()
{
    vector<int> nums;
    for(int i = 0; i < 10; i++)
    {
        nums.push_back(i); //appends i to the vector
    }

    for(auto item : nums) //prints every element of a collection aka vector
    {
        cout << item << " " << '\n';
    }

    vector<string> words;
    cout << "Enter three words:";
    for(int i = 0; i < 3; i++)
    {
        string word;
        cin >> word;
        words.push_back(word);
    }
    for(auto item : words)
    {
        cout << item << " ";
    }

}