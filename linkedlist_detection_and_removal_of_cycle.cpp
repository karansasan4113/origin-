#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void append(node **headref, int newdata)
{
    node *newnode = new node();
    node *last = *headref;
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
void makecycle(node *&head, int pos)
{
    node *temp = head;
    node *startnode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}
void removecycle(node *&head)
{
    node *slow = head;
    node *fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    fast = head;
    while (slow->next != fast->next) //  if we equate slow!=fast then only 1 2 3 will print
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}
bool detectcycle(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
void printlist(node *node)
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

    node *head = NULL;
    int x, y;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        cin >> x;
        append(&head, x);
    }

    // printlist(head);

    makecycle(head, 3);
    cout << detectcycle(head) << endl;
    removecycle(head);
    printlist(head);
}
