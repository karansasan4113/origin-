#include <iostream>
#include <string>
using namespace std;

string str(string s)
{
    if (s.length() == 0) // base value
    {
        return "";
    }
    char a = s[0];

    string ans = str(s.substr(1));

    if (a == 'x')
    {
        return ans + a; // it add the x to the end of string;
    }
    else
    {
        return a + ans; // non x elements re add to string
    }
}
int main()
{
    string s;
    getline(cin, s);

    cout << str(s);
}