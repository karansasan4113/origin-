// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int count,num,beg,end,i,arr[20],mid;
   // cout<<"how many elements want yow like to enter";
    cin>>count;
    for(i=0;i<count;i++)
{
    cin>>arr[i];
}
//cout<<"enter the number that you want to search";
cin>>num;
beg=0;
end=end-1;
mid=(beg+end)/2;
while(beg<=end)
{
    if(arr[mid]<num)
    {
        beg=mid+1;
    }
    else if (arr[mid]==num)
    {
    cout<<num<<mid+1<<endl;
    break;
    }
    else
    {
        end=mid-1;
    }

    mid=(beg+end)/2 ;
}
if((beg+end)/2)
{
    cout<<num<<"not found in the array";
}
return 0;
}