#include <iostream>
using namespace std;

int firocc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }

    return firocc(arr, n, i + 1, key);
}

int lastocc(int arr[], int n, int i, int key) // this code is done by me
{

    if (i == -1)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }

    return lastocc(arr, n, i - 1, key);
}

int main()
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};

    cout << firocc(arr, 7, 0, 2);
    cout << endl;
    cout << lastocc(arr, 7, 7, 2);
    // cout<<lastocc2(arr,7,7,2);
}
/*
int lastocc2(int arr[], int n, int i, int key) // this code is done by mam
{

    if (i == n)
    {
        return -1;
    }
    int restarray = lastocc2(arr, n, i +1, key);
    if (restarray != -1)
    {
        return restarray;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}
*/