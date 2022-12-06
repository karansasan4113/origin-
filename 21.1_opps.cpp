#include<iostream>
using namespace std;

class student
{
    string name;
    public:
    
    int age; // data members
    bool gender;
    void setname(string s) // to acess private data members;
    {
        name=s;
    }
    void getname()
    {
        cout<<name;
    }
    void printinfo() // member function
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;

    }
};
int main()
{
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        string s;
        cout<<"name"<<endl;
        cin>>s;
        arr[i].setname(s);
        cout<<"age"<<endl;
        cin>>arr[i].age;
        cout<<"sex"<<endl;
        cin>>arr[i].gender;
        
    }
    for (int i = 0; i < 3; i++)
    {
        arr[i].printinfo();
    }
    
}