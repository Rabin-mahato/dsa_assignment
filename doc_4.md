# Program 4: Doubly Linked List Implementation

## Aim

To implement a doubly linked list using structure and perform:
1. Insert after a given node
2. Delete a node

---

## Data Structure Definition

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

Explanation:

- data → stores value
- prev → pointer to previous node
- next → pointer to next node

In doubly linked list, traversal can happen in both forward and backward directions.

---

## Functions Implemented

### createNode(int value)
Allocates memory and initializes a new node.

### insertEnd(struct Node* head, int value)
Used to create initial list by inserting nodes at the end.

### insertAfter(struct Node* node, int value)
Inserts a new node after a given node.
Adjusts both next and prev pointers correctly.

### deleteNode(struct Node* head, struct Node* node)
Deletes the given node and updates neighboring pointers.

### display(struct Node* head)
Displays list in forward direction.

---

## Main Function Overview

1. Create list: 10, 20, 30
2. Insert 25 after 20
3. Delete node 30
4. Display list after each operation

---

## Sample Output

Initial List:
10 <-> 20 <-> 30 <-> NULL

Insert 25 after 20:
10 <-> 20 <-> 25 <-> 30 <-> NULL

Delete node with value 30:
10 <-> 20 <-> 25 <-> NULL

---

## Conclusion

Doubly linked list allows efficient insertion and deletion 
because it maintains both previous and next pointers.

10 <-> 20 <-> 25 <-> NULL
Conclusion: The structure of a doubly linked list enables efficient insertion and deletion because both previous and next pointers are maintained.
