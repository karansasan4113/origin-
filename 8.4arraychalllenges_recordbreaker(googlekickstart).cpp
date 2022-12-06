#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int dif = arr[1] - arr[0];

    int k=0;
    int mx=-1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n==1)
    {
        cout<<'1'<<endl;
    }
    else {
    for (int i = 0; i < n; i++)
    {
        if (arr[i+1]>arr[i]&&arr[i+1]>mx&&i+1<n)
        {
            k++;
        }
        mx=max(mx,arr[i]);
    }
    cout<<k;
    }
    
}