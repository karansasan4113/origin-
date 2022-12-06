#include<iostream>
using namespace std;

bool issafe(int x,int y, int n,int arr)
{
    if ( x<n&&y<n&&arr[x][y]==1)
    {
        return true;
    }
    return false;
    
}
int ratmaze(int x,int y,int n , int arr)
{
    if (issafe(x,y,n,arr))
    {
        
    }
    
}