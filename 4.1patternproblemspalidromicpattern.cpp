#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        int k=i;
        
        for ( j = 1; j <=n; j++)
        {
            if (j<=n-i)
            {
                cout<<' ';
            }
            else{
                cout<<n+1-j;

            }
            
        }
        for (int l = 2; l <=i; l++)
        {
            cout<<l;
        }
        cout<<endl;
    }
    
}