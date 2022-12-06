#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)         // here we use i instead of n mainly two reasons :1 is is removes unwanted 0 or :2 is one is not repeated twice in i=0 0r j=0 because nc0 or nc1 is same; 
        {
            int ncr = fact(i) / (fact(j) * fact(i - j));
              cout << ncr << ' ';
            
        }
        cout << endl;
    }
}