#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void str(string s, int i)      // no need of i directly put value of i=0;
{
    if (s.length() == 0)        // base value
    {
        return;
    }

    if (s[i] == 'p' && s[i + 1] == 'i')
    {
        cout << "3.14";

        str((s.substr(2)), i);       // substr(2) because we take 2 elements and give one element so 2 at atime
    }
    else
    {
        cout << s[i];
        str(s.substr(1), i);    // substr(1) because we directly print same element thats why one at atime;
    }
}
int main()
{
    string s;
    int i = 0;
    getline(cin, s);
    str(s, 0);
}