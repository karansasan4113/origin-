#include <iostream>
using namespace std;
bool sort(int arr[], int n)
{
    if (n == 1)
    {
        return true; // base condition means if we have only one element in aarray it is atoumatically sorted or last element of array meaans (arr+4,n-4) is last element so it stops recursion;
    }
    bool restarray = sort(arr + 1, n - 1); // check  for rest array;  arr+1 starts for num 2 to num 9 hence n also decrese to 1 means n-1;
    return (arr[0] < arr[1] && restarray); // check whole array
}
int main()
{
    int arr[] = {1, 2, 6, 7, 9};
    // int n=5;
    cout << sort(arr, 5);
}