#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum1 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        
        for (int j = i; j < n; j++)
        {
            sum1 = sum1 + arr[j];
            cout << sum1 << endl;
        }
        sum1 = 0;
    }
}     
