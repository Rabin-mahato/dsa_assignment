# Program 4: Doubly Linked List Implementation  
Aim: To implement a doubly linked list using a structure and perform:  
1. Insert after a given node  
2. Delete a node  

Data Structure Definition  

```c  
struct Node {  
    int data;  
    struct Node* prev;  
    struct Node* next;  
};  
```  

Explanation:  

- data stores the value  
- prev is a pointer to the previous node  
- next is a pointer to the next node  

In a doubly linked list, you can traverse in both forward and backward directions.  

Functions Implemented  

1. createNode(int value)`  
Allocates memory and initializes a new node.  

2. insertEnd(struct Node* head, int value)`  
Creates the initial list by adding nodes at the end.  

3. insertAfter(struct Node* node, int value)`  
Inserts a new node after a given node.  
It correctly adjusts both next and prev pointers.  

4. deleteNode(struct Node* head, struct Node* node)`  
Deletes the specified node and updates neighboring pointers.  

5. display(struct Node* head)`  
Displays the list in the forward direction.  

6. Main Function Overview  

i. Create the list: 10, 20, 30  
ii. Insert 25 after 20  
iii. Delete node 30  
iv. Display the list after each operation  

Sample Output  

Initial List:  
10 <-> 20 <-> 30 <-> NULL  

Insert 25 after 20:  
10 <-> 20 <-> 25 <-> 30 <-> NULL  

Delete node with value 30:  
10 <-> 20 <-> 25 <-> NULL  

Conclusion: A doubly linked list allows for efficient insertion and deletion since it keeps track of both previous and next pointers.