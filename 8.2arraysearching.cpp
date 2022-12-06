#include<iostream>
using namespace std;

int searching(int array[],int n,int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i]==key)
        {
            return i;
        }
        
    }
    return -1;
    
}
int main()
{
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    int key;
    cin>>key;
    cout<<searching(array,n,key);
}