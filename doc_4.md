# Week 4: Implementing a doubly linked list.
Purpose: This program demonstrates how to create a doubly linked list with structures.  Your list will allow:
1. Insertion after a node.
2. Deletion of a node.

Defining our Data Structure

struct Node {
  int data; // stores data for element
  struct Node* prev; // points to the previous node in the list
  struct Node* next; // points to the next node in the list
};

Note: You can traverse through a doubly linked list in both directions (forward and backward).


Functions in the Implementation

1.createNode(int value) - allocates space and creates new node.
2.insertEnd(struct Node* head, int value) - inserts an initial node(s) at the end of the list.
3.insertAfter(struct Node* node, int value) - inserts a new node after the specified node. Updates both next and previous pointers correctly.
4.deleteNode(struct Node* head, struct Node* node) - deletes the specified node and updates pointers for adjacent nodes.
5.display(struct Node* head) - displays the list from the head (forward) to the tail (backward).
6.Main Functionality of Program

1. Create a list with 10, 20, 30
2. Insert 25 after 20 in the list
3. Delete 30 from the list
4. Output the list after each action

Output from Program

List before any actions:
10 <-> 20 <-> 30 <-> NULL

List after 25 has been inserted after 20:
10 <-> 20 <-> 25 <-> 30 <-> NULL

List after 30 has been deleted:
10 <-> 20 <-> 25 <-> NULL
Conclusion: The structure of a doubly linked list enables efficient insertion and deletion because both previous and next pointers are maintained.