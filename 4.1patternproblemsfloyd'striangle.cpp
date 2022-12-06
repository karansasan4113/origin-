#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    k=(n*(n+1))/2;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
}