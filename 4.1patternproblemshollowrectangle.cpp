#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cin >> row >> column;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (j == 1 || j == column || i == 1 || i == row)
            {
                cout << '*';
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}