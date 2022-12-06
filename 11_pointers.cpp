#include<iostream>
using namespace std;
int main()
{
    /*
    char ch='t';
    char*aptr;
    aptr =&ch;
    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
*/
int arr[]={10,20,30,40};
cout<<*arr<<endl;
int* ptr=arr; // arr itself stores the address of array sso no need of & using this &;
for (int i = 0; i < 4; i++)
{
    cout<<*(arr+i)<<endl;
    ptr++;
    // arr++; illeagle gives error;
}

    
}