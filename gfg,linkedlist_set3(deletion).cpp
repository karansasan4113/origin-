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
void deleteNode(Node **headref, int key)
{
    Node *temp = *headref;
    Node *prev = NULL;
    if (temp != NULL && temp->data == key)
    {
        *headref = temp->next;
        delete temp;
        return;
    }
    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            return;
        }
        prev->next = temp->next;
        delete temp;
    }
}
void printlist(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}
int main()
{
    Node *head = NULL;
    push(&head, 5);
    push(&head, 8);
    push(&head, 4);
    push(&head, 0);
    push(&head, 9);
    puts("created linkedlist: ");
    printlist(head);
    deleteNode(&head, 9);
    puts("ater deletion: ");
    printlist(head);
}
