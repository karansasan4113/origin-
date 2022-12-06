#include<iostream>
using namespace std;
int countpath(int s, int e)
{
    if (s==e)
    {
        return 1;
    }
    if (s>e)
    {
        return 0;
    }
    int count=0;
    for (int i = 1; i <=6; i++)
    {
        count+=countpath(s+i,e);
    }
    return count;
    
    
}
int main()
{
    int s,e;
    cin>>s>>e;
    cout<<countpath(s,e)<<endl;
}