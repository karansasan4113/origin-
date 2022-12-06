#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];

    int maxno = 0;
    int minno = INT_MAX; ///  use when we donit know the min value; it is pre defined max value;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        maxno = max(maxno, array[i]);
        minno = min(minno, array[i]);
    }
    cout << maxno << " " << minno << endl;
}