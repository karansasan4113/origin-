#include<iostream>
#include<string>
using namespace std;
 
 void str(string s, string ans)
 {
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char c=s[0];
    int code =c;  // gives the ascci code
    string ros=(s.substr(1));

   str(ros,ans);
   str(ros,ans+c);
   str(ros,ans+to_string(code));   // converts in string or add to ans;

    
 }
 int main()
 {
    string s;
   getline(cin,s);
   
    string ans=" ";
    str(s,ans);
 }