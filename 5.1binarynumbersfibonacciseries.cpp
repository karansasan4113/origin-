#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "0\n";
    }
   else if (n == 2)
    {
        cout << "1\n";
    }
    else
    {
        int a = 0;
        int b = 1;
        cout<<a<<" "<<b<<" ";
        int fibbo;

        for (int i = 3; i <= n; i++)
        {
            fibbo = a + b;
            cout << fibbo << " ";
            a = b;
            b = fibbo;
        }
    }
}