#include<iostream>
using namespace std;
int countpathmaze(int n ,int j, int i)
{
   if (i==n-1&&j==n-1)
   {
    return 1;
   }
   if (i>=n||j>=n)
   {
    return 0;
   }
   return countpathmaze(n,i+1,j)+countpathmaze(n,i,j+1);
   
    
}
int main()
{
   int n,i,j;
   cin>>n>>i>>j;
   cout<<countpathmaze(n,i,j)<<endl;
}