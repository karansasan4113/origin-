#include <iostream>
using namespace std;


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
void insertafter(Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "the given privious node canot be null";
        return;
    }
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
void append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;

    return;
}
void printlist(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        // cout<<" "<<node->next;
        node = node->next;
    }
}
int main()
{
    Node *head = NULL;
    append(&head, 3);
    push(&head, 7);
    push(&head, 1);
    insertafter(head->next, 8);       // means 1 position after head
    insertafter(head->next->next, 5); // means 2 positions after head
    append(&head, 4);
    push(&head, 0);
    printlist(head);
    
    return 0;
}