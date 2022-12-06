#include <iostream>
using namespace std;
int fibbo(int n)
{
    if (n == 0 || n == 1)
    {
        return n; // base idea;
    }

    return fibbo(n - 1) + fibbo(n - 2); // fibbo[n]=fibbo[n-1]+fibbo[n-2];
}
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        cout << fibbo(i) << " "; // to print every value till n;
    }
}