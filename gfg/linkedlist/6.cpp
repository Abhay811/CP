#include "temp.h"

// Detect loop in linked list
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
bool detectLoop(Node *head)
{
    // your code here
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == -1)
            return true;
        temp->data = -1;
        temp = temp->next;
    }
    return false;
}