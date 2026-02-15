

#Program # 3: Reverse Traversal of a Linked List

##Goal: Implement reverse traversal of a single linked List and demonstrate this in the main function.

#Data Structure Definition
A single linked list node will be defined as follows:
struct node {
    int data;
    struct node *next;
};

- The "data" member holds an integer value.
- The "next" member holds a pointer to the next node in the list.

#Functions that have been implemented

1.createNode(int value)
Allocates space for a new node and initializes both the "data" and the "next" pointer.

2.insertEnd(struct node *head,int value) 
Inserts a  new node at the end of the linked list.

3.display(struct node *head)
Displays the linked list in the normal order.

4.reverseTraversal(struct node*head)
Prints the linked list in the reverse order using recursive function calls.
It will first call itself on the next node and then print its current node when returning.

5.Further Description of the Main Function

1. Initialize head as NULL.
2. Add multiple nodes (10, 20, 30, 40) into the linked list.
3. Display the linked list in normal order.
4. Call reverseTraversal to print the linked list in reverse order.

#Sample Output

Normal Traversal
10 -> 20 -> 30 -> 40 -> NULL

Reverse Traversal
40 -> 30 -> 20 -> 10 -> NULL

Summary: The process to reverse traverse a single linked list can be accomplished using recursion.
This process works because the recursive function first visits the last node before printing each node on its way back.
