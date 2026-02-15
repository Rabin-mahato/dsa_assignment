# Program 1: Checking Balanced Parentheses Using Stack

# Aim
To check whether a given mathematical expression has balanced brackets using Stack data structure.



## Data Structure Used

We used a Stack implemented using structure:

struct Stack {
    char arr[SIZE];
    int top;
};

.`arr` stores the brackets.
. `top` keeps track of the top position.
. Stack follows LIFO (Last In First Out) principle.



# Functions Description:
1. init()
Initializes the stack by setting top = -1.

2. isEmpty()
Checks whether the stack is empty.

 3. push()
Adds an opening bracket into the stack.

 4. pop()
Removes and returns the top element from the stack.

 5. match()
Checks whether opening and closing brackets match correctly.

6. checkBalanced()
# Main logic function:
- Push opening brackets.
- Pop and check when closing bracket appears.
- At the end, if stack is empty → expression is balanced.

 # Main Function Overview
In main():
- Three expressions are declared.
- Each expression is checked using checkBalanced().
- The result is printed as Balanced or Not Balanced.



# Sample Output

Expression 1: a + (b - c) * (d
Not Balanced

Expression 2: m + [a - b * (c + d * {m)]
Not Balanced
Expression 3: a + (b - c)
Balanced


 Conclusion

Using stack makes it easy to check balanced parentheses because it stores opening brackets and matches them with closing brackets in correct order.
