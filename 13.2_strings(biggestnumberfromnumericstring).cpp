#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "7657366756754243";
    //sort(s.begin(),s.end()); //accending oder or smallest number
    sort(s.begin(), s.end(), greater<int>()); // greater number;
    cout << s;
}