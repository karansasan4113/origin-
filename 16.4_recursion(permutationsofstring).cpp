#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void str(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        str(ros, ans + ch);
    }
}

int main()
{
    string s;
    getline(cin, s);
    string ans = "";
    str(s, ans);
}
