#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void append(Node **headref, int newdata)
{
    Node *newnode = new Node();
    Node *last = *headref;
    newnode->data = newdata;
    newnode->next = NULL;
    if (*headref == NULL)
    {
        *headref = newnode;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newnode;
    return;
}
int length(Node *head)
{
    int l = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
Node *kappend(Node *&head, int k)
{
    Node *newhead;
    Node *newtail;
    Node *tail = head;
    int l = length(head);
    k = k % l;
    int count = 1;
    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newtail = tail;
        }
        if (count == l - k + 1)
        {
            newhead = tail;
        }
        tail = tail->next;
        count++;
    }
    newtail->next = NULL;
    tail->next = head;
    return newhead;
}
void printlist(Node *node)
{
    while (node != NULL)
    {
        cout  << node->data<<" ";

        node = node->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    int n, k, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        append(&head, x);
    }
    cin >> k;
    printlist(head);
    Node *newhead = kappend(head, k);
    printlist(newhead);
}
