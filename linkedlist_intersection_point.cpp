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

int intersection(Node *&head1, Node *&head2)
{

    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    Node *ptr1;
    Node *ptr2;
    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while (d)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--;
    }
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr2 == ptr1)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}
void intersect(Node *&head1, Node *&head2, int pos)
{
    Node *temp1 = head1;
    pos--;
    while (pos--)
    {
        temp1 = temp1->next;
    }
    Node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    temp2->next = temp1;
}
void printlist(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        append(&head1, x);
    }

    int n2, x2;
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        cin >> x2;
        append(&head2, x2);
    }
    printlist(head1);
    printlist(head2);
    intersect(head1, head2, 2);
    cout << intersection(head1, head2) << endl;
}
