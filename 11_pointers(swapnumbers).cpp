#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=2;
    int b=8;
    //int* aptr=&a;
    //int* bptr=&b;
    //swap(aptr,bptr);
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
}