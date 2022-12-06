#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        int k = n + 1;

        for (j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << ' ';
            }

            else
            {
                cout << '*';
            }
        }
        for (int l = 2; l <= i; l++)
        {
            cout << '*';
        }
        cout << endl;
    }
    for (i = n; i >= 1; i--)
    {

        for (j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << ' ';
            }
            else
            {
                cout << '*';
            }
        }
        for (int l = 2; l <= i; l++)
        {
            cout << '*';
        }
        cout << endl;
    }
}