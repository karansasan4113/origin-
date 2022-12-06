#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cumsum[n + 1];
    cumsum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cumsum[i] = cumsum[i - 1] + arr[i - 1];
    }
    int maxsum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        maxsum = max(maxsum, cumsum[i]);
        for (int j = 1; j <= i; j++)
        {
            sum = cumsum[i] - cumsum[j - 1];
            maxsum = max(maxsum, sum);
        }
    }
    cout << maxsum << endl;
}
// time complexity n^2;