#include<iostream>
using namespace std;
int main()
{
    int age ,years;
    cout<<"enter your age";
    cin>>age;
    if (age>=18)
    {
        cout<<"you are eligible for vote\n";
    }
    else
    {
        cout<<"you are not eligible for vote\n";
    }
    cout<<"no of years required for voting eligibility :   ";
    if (age>=18)
    {
        cout<<"0 years required\n";
    }
    else
    {
        years=18-age;
        cout<<years<<"years required\n";
    }
    
}