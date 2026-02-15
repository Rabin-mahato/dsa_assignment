
# Program 3: Reverse Traversal of Linked List

## Aim

To implement reverse traversal of a singly linked list and demonstrate it in main().

---

## Data Structure Definition

A singly linked list node is defined as:

struct Node {
    int data;
    struct Node* next;
};

- `data` stores the integer value.
- `next` stores the address of the next node.

---

## Functions Implemented

### createNode(int value)
Allocates memory for a new node and initializes data and next pointer.

### insertEnd(struct Node* head, int value)
Inserts a new node at the end of the linked list.

### display(struct Node* head)
Displays the linked list in normal order.

### reverseTraversal(struct Node* head)
Prints the linked list in reverse order using recursion.
It first calls itself for the next node and prints the current node after returning.

---

## Main Function Overview

1. Initialize head as NULL.
2. Insert several nodes (10, 20, 30, 40).
3. Display the list normally.
4. Call reverseTraversal() to print in reverse order.

---

## Sample Output

Normal Traversal:
10 -> 20 -> 30 -> 40 -> NULL

Reverse Traversal:
40 -> 30 -> 20 -> 10 -> NULL

---

## Conclusion

Reverse traversal can be easily implemented using recursion.
The function reaches the last node first and then prints nodes while returning back.
nction first visits the last node before printing each node on its way back.
