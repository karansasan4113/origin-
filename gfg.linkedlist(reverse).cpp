#include <iostream>
using namespace std;
#include <string>
class Node
{
public:
    int data;
    Node *next;
};
void push(Node **headref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*headref);
    (*headref) = new_node;
}
// ireatative method 

Node *reverse(Node *&headref)
{
    Node *prevptr = NULL;
    Node *currptr = headref;
    Node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

// recursive method
Node *rev_recursive(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *newhead = rev_recursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
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
    Node *head = NULL;
    int n, y;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        cin >> n;
        push(&head, n);
    }

    printlist(head);
    //  Node *newhead = reverse(head);
    Node *newhead = rev_recursive(head);
    printlist(newhead);
}
