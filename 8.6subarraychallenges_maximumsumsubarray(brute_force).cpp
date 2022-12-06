#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;                // we need  sum of every subarray thats why we declare here ; otherwise it give sum of all subarray;
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
                // cout<<arr[k]<<" ";
            } // cout<<endl;
            maxsum = max(maxsum, sum);
        }
    }
    cout << maxsum << endl;
}
// time complexcity n^3;