#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
};
void push(node**headref, int newdata)
{
    node*newnode=new node();
    newnode->data=newdata;
    newnode->next=(*headref);
    (*headref)=newnode;
}

node*reverse(node*&headref)
{
    node*prevptr=NULL;
    node*currptr=headref;
    node*nextptr;
    while (currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
    
}
node*rec_reverse(node*&head)
{
    if (head==NULL||head->next==NULL)
    {
        return head;
    }
    node*newheadd=rec_reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newheadd;
    
}
node*reversek(node*head,int k)
{
    node*prevptr=NULL;
    node*currptr=head;
    node*nextptr;
    int count=0;
    while (currptr!=NULL&&count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if (nextptr!=NULL)
    {
        head->next=reversek(nextptr,k);

    }
    return prevptr;
    
}
void printlist(node*node)
{
    while (node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
    cout << endl;
}

int main()
{
    node*head=NULL;
    int x,y;
    cin>>y;
    int k;
    cin>>k;
    for (int i = 0; i < y; i++)
    {
        cin>>x;
        push(&head,x);
    }
  // printlist(head);
 //node*newhead=reverse(head);
 //printlist(newhead);
   //node*newheadd=rec_reverse(head);
  //  printlist(newheadd);
    node*newhead=reversek(head,k);
    printlist(newhead);
}
