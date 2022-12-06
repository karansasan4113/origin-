#include<iostream>
using namespace std;
int main()
{
    char alphabet;
    cin>>alphabet;
    switch (alphabet)
    {
    case 'a':
        cout<<"alphabet is vovel";
        break;
    case 'e':cout<<"alphabet is vovel";
        break;
    case 'i':cout<<"alphabet is vovel";
        break;
    case 'o':cout<<"alphabet is vovel";
        break;
    case 'u':cout<<"alphabet is vovel";
        break;
        default: cout<<"alphabet is consonants";
        break;
    }
}