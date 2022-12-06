#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << ' ';
            }
            else
            {
                if (i % 2 == 0)
                {
                    if (j % 2 == 0)
                    {
                        cout << i;
                    }
                    else
                    {
                        cout << ' ';
                    }
                }
                if (i % 2 != 0)
                {
                    if (j % 2 != 0)
                    {
                        cout << i;
                    }
                    else
                    {
                        cout << ' ';
                    }
                }

               
            }
        }
        for (int l = 2; l <= i; l++)
        {
             if (i % 2 == 0)
                {
                    if (l % 2 == 0)
                    {
                        cout << i;
                    }
                    else
                    {
                        cout << ' ';
                    }
                }
                if (i % 2 != 0)
                {
                    if (l % 2 != 0)
                    {
                        cout << i;
                    }
                    else
                    {
                        cout << ' ';
                    }
                }

        }
        cout << endl;
    }
}
// use space cout<<i<<' '; this to minimize the code the we not even use space at odd place
