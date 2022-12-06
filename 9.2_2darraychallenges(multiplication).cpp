#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int p, q;
    cin >> p >> q;
    int arry[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> arry[i][j];
        }
    }
    int array[n][q];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            array[i][j] = 0;
        }
    }

    if (m == p)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    array[i][j] += arr[i][k] * arry[k][j];
                    // array[i][j]=array[i][j]+mx[i][j];
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}