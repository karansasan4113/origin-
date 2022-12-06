#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "jaskaran Singh sasan";
    // cout<<'b'-'B'; // is equall to 32
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] -= 32;
        }
    }
    cout << s1 << endl;
    ;
    string s2 = "JAKSRANSiNGH SASAN";
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] >= 'A' && s2[i] <= 'Z')
        {
            s2[i] += 32;
        }
    }
    cout << s2 << endl;
    string s3 = "a";
    s3[0] = s3[0] - 32;
    cout << s3 << endl;
    string s = "singh sAab The great";
    transform(s.begin(), s.end(), s.begin(), ::toupper); // use tolower for lower alphabet;
    cout << s;
}