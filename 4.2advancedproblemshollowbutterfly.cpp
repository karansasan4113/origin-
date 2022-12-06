#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int k = n + 1;
    for (i = n; i >= 1; i--)
    {
        int k = n + 1;

        for (j = 1; j <= n; j++)
        {
            if (j==1)
            {
                cout<<'*';
            }
            
            else if (j <= n - i)
            {
                cout << ' ';
            }

            else
            {
                
                
                 if (i + j == k)
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
            }
        }
        for (int l = 2; l <= i; l++)
        {

            if (l == i)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n; j++)
        {
            if (j == 1)
            {
                cout << '*';
            }
            else

                if (j <= n - i)
            {
                cout << ' ';
            }
            else
            {
                if (i + j == k)
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
            }
        }
        for (int l = 2; l <= i; l++)
        {
            
           
            
            
             if (l ==i)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}