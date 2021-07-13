#include "temp.h"

// Rotate a linked list
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *rotate(Node *head, int k)
{
    // Your code here
    Node *temp = head;

    int i = 1;
    while (i < k && temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    if (temp == NULL)
        return head;
    Node *ptr = temp;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = head;
    head = ptr->next;
    ptr->next = NULL;
    return head;
}