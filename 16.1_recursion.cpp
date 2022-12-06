#include<iostream>
using namespace std;
int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    int prevsum=sum(n-1);
    return n+sum(n-1);
    
}
int main()
{
    int n;
    cin>>n;
   
    cout<<sum(n);
}