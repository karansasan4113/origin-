#include <iostream>
#include <algorithm> // inbuild sorting library;
#include <string>
using namespace std;
int main()
{
    // string str;
    // string str1(5, 'j'); // we have to define str1 here with the string str1(5,'j'); not above otherwise it shows error;
    // getline(cin,str); // this function is use to print whole line with spaces in strings;
    // string s1 ="fam";
    // string s2="ily";
    // s1.append(s2);// append funtion is use to add words like fam+ily=family;
    //  cout << s1;
    //  s2.append(s1); //if  we already append once and again append eachother the out come will be illy+family=illyfamily beacause in above line we already join the word and now s1 became family;
    // cout<<s2;
    // cout<<s1+s2<<endl; // we donot want to append we directly use + oppreator;
    //  cout<<s1[1]; // to access a particular character;
    //   string abc="axasdftg fabvgdv gbgbg "; // we need get line function when we input the string;
    // abc. clear();
    //   cout<<abc;
    // string s1 ="nincoompooo karan";
    // string s2="xyz";
    // cout<<s1.compare(s2); // compare function used to comapre two strings;
    // s1.erase(3,3); // use to erase 1 or groups of elements in string first write string name then erase function then index and then number of elements;
    // cout<<s1;
    // cout<<s1.find(" kara"); // find function gives the index of first element which i have to find in string ;
    // string s3=" lol";
    // s1.insert(3,s3);  it provide gap btween them;
    // s1.insert(3,"lol"); not provide any gap;
    // cout<<s1;
    // cout<<s1.length(); // use to find length; we also can use size instead of length; this length function is use in iretration in for loop;
    /* for (int i = 0; i < s1.length(); i++)
     {
      cout<<s1[i];
     }*/
    //  string st="123";
    // int x=stoi(st); // use to covert string into integer;
    // cout<<x+2;
    // int x=123;
    // string st=to_string(x); // use to convert integer into string;
    // cout<<st+"2";
    string s7 = "85 8962904fh uasjdcia dskljc!!W@!#@#$%$##^%";
    sort(s7.begin(), s7.end()); // use for sorting
    cout << s7;

    return 0;
}
