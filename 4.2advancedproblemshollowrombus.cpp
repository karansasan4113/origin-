#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << ' ';
            }
        }
        for (int l = 1; l <= n; l++)
        {
            if (i==1||i==n)
            {
                cout << '*';
            }
            else if (l==1||l==n)
            {
                cout<<'*';
            }
            else{
                cout<<' ';
            }
            
            
        }
        cout << endl;
    }
}