#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};
void push(Node **headref, int newdata)
{
    Node *newnode = new Node();
    newnode->data = newdata;
    newnode->next = (*headref);
    newnode->prev = NULL;
    if ((*headref) != NULL)
    {
        (*headref)->prev = newnode;
    }
    (*headref) = newnode;
}
void insertafter(Node *prevnode, int newdata)
{
    if (prevnode == NULL)
    {
        cout << "canot be null";
        return;
    }
    Node *newnode = new Node();
    newnode->data = newdata;
    newnode->next = prevnode->next;
    prevnode->next = newnode;
    newnode->prev = prevnode;
    if (newnode->next != NULL)
    {
        newnode->next->prev = newnode;
    }
}
void append(Node **headref, int newdata)
{
    Node *newnode = new Node();
    Node *last = (*headref);
    newnode->data = newdata;
    newnode->next = NULL;
    if (*headref == NULL)
    {
        newnode->prev = NULL;
        (*headref) = newnode;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newnode;

    newnode->prev = last;
    return;
}
void deletenode(Node **headref, Node *del)
{
    if (*headref == NULL || del == NULL)
    {
        return;
    }
    if (*headref == del)
    {
        *headref = del->next;
    }
    if (del->next != NULL)
    {
        del->next->prev = del->prev;
    }
    if (del->prev != NULL)
    {
        del->prev->next = del->next;
    }
    free(del);
    return;
}

void printlist(Node *node)
{
    Node *last;
    while (node != NULL)
    {
        cout << node->data << " ";
        last = node;
        node = node->next;
    }
    cout << endl;
    while (last != NULL)
    {
        cout << last->data << " ";
        last = last->prev;
    }
}
int main()
{
    Node *head = NULL;
    int x, y;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        cin >> x;
        // push(&head, x);
        append(&head, x);
    }
    deletenode(&head, head);
    //  insertafter(head, 0);
    printlist(head);
}
