#include <stdio.h>
#include <stdlib.h>

/* ----------- Node Definition ----------- */

struct Node
{
    int data;
    struct Node *next;
};

/* ----------- Function to create new node ----------- */

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

/* ----------- Insert at end ----------- */

struct Node *insertEnd(struct Node *head, int value)
{

    struct Node *newNode = createNode(value);

    if (head == NULL)
        return newNode;

    struct Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

/* ----------- Normal Traversal ----------- */

void display(struct Node *head)
{

    struct Node *temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

/* ----------- Reverse Traversal (Using Recursion) ----------- */

void reverseTraversal(struct Node *head)
{

    if (head == NULL)
        return;

    reverseTraversal(head->next);
    printf("%d -> ", head->data);
}

/* ----------- Main Function ----------- */

int main()
{

    struct Node *head = NULL;

    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);

    printf("Normal Traversal:\n");
    display(head);

    printf("\nReverse Traversal:\n");
    reverseTraversal(head);
    printf("NULL\n");

    return 0;
}
