#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int factorial = 1;
    while (n > 0)
    {

        factorial = factorial * n;

        n = n - 1;
    }
    cout << factorial << ' ';
}