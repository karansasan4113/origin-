#include <iostream>
#include <string>
using namespace std;

string str(string s)
{
    if (s.length() == 0)  // base value
    {
        return " ";    // non void function thats why we have to return something;
    }
    char c = s[0];
    string ans = str(s.substr(1));  // remove one element from string
    if (c == ans[0])       // for repeatative character
    {
        return ans;     
    }
    else               // for non repeative character
    {
        return c + ans;    // add non similar element
    }
}
int main()
{
    string s;
    getline(cin, s);
    cout << str(s);
}