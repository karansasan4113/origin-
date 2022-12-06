#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();
    int i = 0;
    int curr = 0, max = 0;
    int st = 0, maxst = 0;
    while (1)
    {

        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (curr > max)
            {
                max = curr;
                maxst = st;
            }
            curr = 0;
            st = i + 1;
        }
        else
        {
            curr++;
        }

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    for (int i = 0; i < max; i++)
    {
        cout << arr[i + maxst];
    }

    cout << " " << max << endl;
}