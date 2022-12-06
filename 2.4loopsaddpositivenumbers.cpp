#include<iostream>
using namespace std;
int main()
{
    int number;
    int sum=0;
    cout<<"enter the number";
    cin>>number;
    while (number>=0)
    {
        sum+=number;
         cout<<"enter the number";
         cin>>number;
    }
    cout<<"sum is"<<sum;
    
}