#include<iostream>
using namespace std;

int friendship(int n)
{
    if (n==0||n==2||n==1)
    {
        return n;
    }
    return friendship(n-1)+friendship(n-2)*(n-1);
    
}
int main()
{
    int n;
    cin>>n;
    cout<<friendship(n);
}