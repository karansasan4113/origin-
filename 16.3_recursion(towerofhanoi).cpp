#include<iostream>
using namespace std;
 
 void hanoi(int n, char begin ,char helper ,char final)
 {
    if (n==0)
    {
        return;
    }
  hanoi(n-1,begin,final,helper);
  cout<<begin<<" "<<"to"<<" "<<final<<endl;
  hanoi(n-1,helper,begin,final);

    
 }
 int main()
 {
    int n;
    cin>>n;
    char Begin='A';
    char Helper='B';
    char Final='C';

    hanoi(n,Begin,Helper,Final);
 }