#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number  ";
    cin >> num;
    if (num == 0)
    {
        cout << "number neither odd or even";
    }

    else if (num % 2 == 0)
        {
            cout << "number in even";
        }
        else
        {
            cout << "number is odd";
        }
    
}