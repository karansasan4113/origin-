#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial=1;
    for (int i = 1; i <=n; i++)
    {
        factorial=factorial*i;
    }
   return factorial;
}

int main()
{
    int n;
    int r;
    cin >> n >> r;
   int ncr = fact(n)/(fact(r)*fact(n-r));
   cout<<ncr<<endl;
}

/*voidncr(int n, int r)
{
    int factorial_n = 1;
    int factorial_r = 1;
    int factorial_nr = 1;
    int nCr;
    for (int i = 1; i <= n; i++)
    {
        factorial_n = factorial_n * i;
    }
    for (int i = 1; i <= r; i++)
    {
        factorial_r = factorial_r * i;                                               //   itna vada likh di koi lood ni , na vaar repeat karan di lood hai
    }
    for (int i = 1; i <= n - r; i++)
    {
        factorial_nr = factorial_nr * i;
    }

    nCr = factorial_n / (factorial_r * factorial_nr);
    cout << nCr << endl;
}*/

