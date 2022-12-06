#include<iostream>
using namespace std;
int pow(int n,int p)
{
    if (p==0)
    {
        return 1; // end value
    }
    int prevpow=pow(n,(p-1));
    return n*prevpow;  // it call itself like stack one by one to the end value 
    
}
int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
   
    cout<<pow(n,p);
}