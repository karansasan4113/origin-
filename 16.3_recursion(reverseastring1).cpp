#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void strr(string str)
{

    if (str.length() == 0) // base case   ;  so need to mention the length of every string basically use this function;
    {
        return;
    }
    string ros = str.substr(1); // we made a string in which we store rest of the string except first character; ros means rest of string;
                                // we in build function called (substr)  is works like { name of string.substr(k)};
                                // k is the integer number after which it helps to store the string like if put 1  it automatically
                                // stores the next values of string after 1 not 1 ;like (karan) after using it it stores (aran)  then (ran) then (an) then (n);
    strr(ros);
    cout << str[0]; // it refers to print first element of string;
}

int main()
{
    string str;
    getline(cin, str);

    strr(str); // if we not want to input directly write the string here;
}