#include <iostream>
using namespace std;

void fib(int num)
{
    int a = 0;
    int b = 1;
    int sum;

    {

        for (int i = 1; i <= num; i++)
        {
            cout << a << ' ';
            sum = a + b;

            a = b;
            b = sum;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    fib(n);
}