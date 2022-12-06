#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum =0;
    int org_num=n;
    while (n>0)
    {
        int rem =n%10;
        sum=sum+ rem*rem*rem;
        n =n/10;
    }
    if (org_num==sum)                         //  it stores the original value of n because current value is not same as original value because of n=n/10;
    {
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"not armstrong number"<<endl;
    }
    
}