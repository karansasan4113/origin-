#include<iostream>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n-i;j++)
        {
            
                cout<<i<<" ";
            
            
        }
        cout<<endl;
    }
    
}