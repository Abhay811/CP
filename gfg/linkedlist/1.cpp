#include "temp.h"

// Middle element of linkedlist
struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int getMiddle(Node *head)
{
    // Your code here
    struct Node *temp = head;
    struct Node *temp2 = head;
    if (head->next == NULL)
        return head->data;

    while (temp2 != NULL && temp2->next != NULL)
    {
        temp = temp->next;
        temp2 = temp2->next->next;
    }
    return temp->data;
}