#include<iostream>
using namespace std;
int fact(int n)
{
    if (n==0)
    {
        return 1;  // base value it stops the recursion and starts giving return value;
    }
    //int prevfact=fact(n-1); // stores the recursion value no need of this to write directly write in return fuction ; 
   // return n*prevfact; // calls the n-1 value again and again till n==0;
  return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
   
    cout<<fact(n);
}
