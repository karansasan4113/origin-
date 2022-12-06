#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int dif = arr[1] - arr[0];

    int k=2;
    int mx=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)     // if you want to start from 0 put k=1; and run.
    {
        if (arr[i + 1] - arr[i] == dif)
        {
            k++;
        }
        else{
          dif=  arr[i + 1] - arr[i] ;
          k=2;
        }

        mx = max(mx, k);
        
    }cout << mx;
}