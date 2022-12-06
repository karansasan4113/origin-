#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int j = 1;
    int minn = 19999;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }                                                       //optimize code 
    int minidx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    if (minidx == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << minidx + 1 << endl;
    }

    /*
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)                     // my code
            {
                if (arr[i] == arr[j] && j < n)
                {
                    cout << i + 1;
                    return 0;
                }
            }
        }*/
}
