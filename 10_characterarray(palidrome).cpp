#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
    bool check = 1;
    int i = 0;
    while (i < n + 1)
    {
        if (arr[i] != arr[n - 1])
        {
            check = 0;
            break;
        }

        i++;
        n--;
       
    }
    if (check == true)
    {
        cout << "palidrome" << endl;
    }
    else
    {
        cout << "not a palidrome" << endl;
    }
}