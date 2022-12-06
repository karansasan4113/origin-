#include<iostream>
using namespace std;
int main()
{
    int n,i,k;
    
    cin>>n;
    for ( i = 0; i <= n; i++)
    {
        k=n-i;
        for (int j = 1; j <= k; j++)
        {
            
           cout<<j<<" ";
           
        }
        cout<<endl;
    }
    
}