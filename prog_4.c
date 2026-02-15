#include <stdio.h>
#include <stdlib.h>

/* -------- Doubly Linked List Node -------- */

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

/* -------- Create New Node -------- */

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

/* -------- Insert at End (for initial creation) -------- */

struct Node *insertEnd(struct Node *head, int value)
{

    struct Node *newNode = createNode(value);

    if (head == NULL)
        return newNode;

    struct Node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

/* -------- Insert After Given Node -------- */

void insertAfter(struct Node *node, int value)
{

    if (node == NULL)
    {
        printf("Given node cannot be NULL\n");
        return;
    }

    struct Node *newNode = createNode(value);

    newNode->next = node->next;
    newNode->prev = node;

    if (node->next != NULL)
        node->next->prev = newNode;

    node->next = newNode;
}

/* -------- Delete a Node -------- */

struct Node *deleteNode(struct Node *head, struct Node *node)
{

    if (head == NULL || node == NULL)
        return head;

    if (head == node)
        head = node->next;

    if (node->next != NULL)
        node->next->prev = node->prev;

    if (node->prev != NULL)
        node->prev->next = node->next;

    free(node);

    return head;
}

/* -------- Display Forward -------- */

void display(struct Node *head)
{

    struct Node *temp = head;

    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

/* -------- Main Function -------- */

int main()
{

    struct Node *head = NULL;

    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);

    printf("Initial List:\n");
    display(head);

    printf("\nInsert 25 after 20:\n");
    insertAfter(head->next, 25); // after node with 20
    display(head);

    printf("\nDelete node with value 30:\n");
    head = deleteNode(head, head->next->next->next);
    display(head);

    return 0;
}
