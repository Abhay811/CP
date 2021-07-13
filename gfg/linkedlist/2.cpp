#include "temp.h"

// Reverse a linked list
struct Node
{
    int data;
    struct Node *next;
};

struct Node *reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    if (head->next == NULL)
        return head;
    struct Node *ptr = head;
    struct Node *curr = head->next;
    struct Node *temp = head->next->next;

    ptr->next = NULL;
    curr->next = ptr;
    while (temp != NULL)
    {

        ptr = curr;
        curr = temp;
        temp = temp->next;
        curr->next = ptr;
    }

    head = curr;
}