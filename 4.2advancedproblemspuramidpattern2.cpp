#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << ' ';
        }
        space--;
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}