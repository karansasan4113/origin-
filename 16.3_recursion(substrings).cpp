#include<iostream>
#include<string>
using namespace std;
 
 void str(string s, string ans)
 {
    if (s.length()==0)
    {
        cout<<ans;
        return ;
    }
    char c=s[0];
    string ros=(s.substr(1));

   str(ros,ans);
   str(ros,ans+c);

    
 }
 int main()
 {
    string s;
   getline(cin,s);

    string ans=" ";
    str(s,ans);
 }